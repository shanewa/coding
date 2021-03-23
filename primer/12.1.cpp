#include "12.2.h"
#include <iterator>
#include <algorithm>

int main() {
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        std::copy(b2.cbegin(), b2.cend(), std::ostream_iterator<std::string>(std::cout, " "));
        std::cout << std::endl << b2.size() << std::endl;
    }
    std::copy(b1.cbegin(), b1.cend(), std::ostream_iterator<std::string>(std::cout, " "));
    std::cout << std::endl << b1.size() << std::endl;
}
