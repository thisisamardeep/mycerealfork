//
// Created by amardeep on 17/02/24.
//
#include "type_traits"
#include "iostream"

class MyInteger {

public:
    MyInteger(int t) : m_i(t) {

    }

public:
    int m_i;

};

class Square {
public:
    Square(MyInteger i) : my_int(i) {
    }

    int squared() {
        return my_int.m_i * my_int.m_i;
    }

public:
    MyInteger my_int;
};

int MyInteg() {
    return 56;
}



//    MyInteger rr{34};
//MyInteger mi(i);
////
////    Square r(mi);
//Square r(MyInteger(i));


//typename MyInteg MyIntegrr;

int main() {
    std::cout << "std::is_function<MyInteger>    " << std::boolalpha << std::is_function<MyInteger>::value << std::endl;
    std::cout << "std::is_function<MyInteger()>    " << std::boolalpha << std::is_function<MyInteger()>::value
              << std::endl;
}

