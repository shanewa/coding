#include <iostream>
using namespace std;

istream& teststrm(istream& istrm)
{
	    auto old_state = istrm.rdstate();
	        string in;
		    while (istrm >> in)
			        {
					        cout << in;
						    }
		        cout << endl;
			    istrm.setstate(old_state);
			        return istrm;
}

int main() {
	    teststrm(cin);
}
