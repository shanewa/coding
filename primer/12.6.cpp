#include <iostream>
#include <string>
#include <vector>
#include <iterator>

std::vector<int>* factory() {
    return new std::vector<int>;
}

std::vector<int>* input(std::vector<int>* vptr) {
    std::string user_input;
    std::cin >> user_input;
    for (const auto &s : user_input) {
        if (!isspace(s)) {
            vptr->push_back(std::stoi(s));
        }
    }
    return vptr;
}

void print(std::vector<int>* vptr) {
    std::copy(vptr->cbegin(), vptr->cend(), std::ostream_iterator<int>(std::cout, ", "));
}

int main() {
    print(input(factory()));
}