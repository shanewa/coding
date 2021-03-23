/*
练习9.52：使用stack处理括号化的表达式。当你看到一个左括号，将其记录下来。当你在一个左括号之后看到一个右括号，从stack中pop对象，直至遇到右括号，将左括号也一起弹出栈。让后将一个值（括号内的运算结果）push到栈中，表示一个括号化的（子）表达式已经处理完毕，被其运算结果所替代。

/*

*说明：中缀表达式求值函数说明
1.扫描表达式
  a.如果 token 是 "+","-","*","/"
    a1.符号栈为空，token直接入栈
		a2.符号栈不空，比较token和栈顶符号的优先级
			如果token的优先级高，直接入栈
			否则将栈里面的符号出栈，并和数字栈进行计算，设置新的栈顶符号和优先级，一直到优先级低的全部弹出栈，循环停止，新的符号入栈
  b.如果 token是 "(",直接入栈
  c. 如果token是")"
		当stack_token.top !="("，即没有找到最近的和右括号匹配的左括号
			操作符弹出栈，并和操作数计算
				最后将"("也弹出去
					")"不进栈，它的作用是为了消除掉最近的左括号( // 循环外的pop是将左括号丢弃
  d.剩下的情况就都是数字，直接进入操作数栈

*/

#include <iostream>
#include <string>
#include <vector>
#include <stack>
 
using namespace std;
 
int priority(string opt)
{
	int p = 0;
	if(opt == "(")
		p = 1;
	if(opt == "+" || opt == "-")
		p = 2;
	if(opt == "*" || opt == "/")
		p = 3;
	return p;
}
 
void calculate(stack<int> &opnstack, string opt)
{
	if(opt == "+")
	{
		int ropn = opnstack.top();
		opnstack.pop();
		int lopn = opnstack.top();
		opnstack.pop();
		int result = lopn + ropn;
		opnstack.push(result);
	}
	if(opt == "-")
	{
		int ropn = opnstack.top();
		opnstack.pop();
		int lopn = opnstack.top();
		opnstack.pop();
		int result = lopn - ropn;
		opnstack.push(result);
	}
	if(opt == "*")
	{
		int ropn = opnstack.top();
		opnstack.pop();
		int lopn = opnstack.top();
		opnstack.pop();
		int result = lopn * ropn;
		opnstack.push(result);
	}
	if(opt == "/")
	{
		int ropn = opnstack.top();
		opnstack.pop();
		int lopn = opnstack.top();
		opnstack.pop();
		int result = lopn / ropn;
		opnstack.push(result);
	}
}
 
int calcuExpression(vector<string> vec)
{
	stack<int> statck_num;
	stack<string> stack_token;
	
	for(auto i = 0; i != vec.size(); ++i)
	{
		string token = vec[i];
		if(token == "+" || token == "-" || token == "*" || token == "/")
		{
			if(stack_token.size() == 0)
			{
				stack_token.push(token);
			}				
			else
			{
				int token_p = priority(token);
				string top_opt = stack_token.top();
				int opt_p = priority(top_opt);
				if(token_p > opt_p) 
				{
					stack_token.push(token);
				}
				else
				{
					while(token_p <= opt_p)
					{
						stack_token.pop();
						calculate(statck_num, top_opt);
						if(stack_token.size() > 0)
						{
							top_opt = stack_token.top();
							opt_p = priority(top_opt);
						}
						else
						{
							break;
						}
					}
					stack_token.push(token);
				}
			}
		}		
		else if (token == "(")
		{
			stack_token.push(token);
		}
		else if(token == ")")
		{
			while(stack_token.top() != "(")
			{
				string top_opt = stack_token.top();
				calculate(statck_num,top_opt);
				stack_token.pop();
			}
			stack_token.pop();
		}
		else
		{
		  	statck_num.push(atoi(token.c_str())); 
		}
	}
	
	while(stack_token.size() != 0)
	{
		string top_opt = stack_token.top();
		calculate(statck_num,top_opt);
		stack_token.pop();
	}
	
	return statck_num.top();
}
 
int main()
{
	vector<string> tokens =  {"(","1","+","2",")","*","3","/","(","2","-","1",")"};

	for(auto i = 0; i != tokens.size(); ++i)
	cout << tokens[i] << " ";
	cout << endl;
	cout << calcuExpression(tokens) << endl;

	return 0;
}