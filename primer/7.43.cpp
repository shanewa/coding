#include <iostream>

class NoDefault
{
public:
    inline NoDefault(int a)
    {
        std::cout << a << std::endl;
    }
    inline NoDefault()
    {
        std::cout << "calling NoDefault default constructor" << std::endl;
    }
};

class C
{
    public:
        NoDefault n;
        inline C()
        {
            n = NoDefault(1);
            std::cout << "calling C default constructor" << std::endl;
        }
};

int main()
{
    C c1;
}