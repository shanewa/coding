#include "12.2.h"
#include <iterator>
#include <algorithm>

int main() {
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
    }
    std::copy(b1.data->cbegin(), b1.data->cend(), ostream_interator<string>(std::cout, " "));
    std::cout << std::endl << b1.data->size() << std::endl;
    std::copy(b2.data->cbegin(), b2.data->cend(), ostream_interator<string>(std::cout, " "));
    std::cout << std::endl << b2.data->size() << std::endl;
}
