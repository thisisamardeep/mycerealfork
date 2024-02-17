//
// Created by amardeep on 17/02/24.
//
#include "type_traits"
#include "iostream"


class Base {
public:
    static int x;
public:
    static int ee() {
        return 516;
    }
};

int Base::x = 56;

int main() {
    std::cout << Base::x << std::endl;
    int err = Base::ee();
    std::cout << err << std::endl;

}

