//
// Created by amardeep on 17/02/24.
//
#include "type_traits"
#include "iostream"


class Foo {
public:
    explicit Foo();
    explicit Foo(int);
    explicit Foo(int, int);
};
Foo::Foo() {
}
Foo::Foo(int i) {
}
Foo::Foo(int i, int j) {
}
void read_foo(const Foo &) {
// Some external api which reads Foo
};

int main() {
    Foo i1;
    Foo i2 = Foo();
    Foo i3 = Foo(1);
    Foo i4 = Foo(1, 2);
    // The below ways of creation will not work if explicit is marked.So our code base becomes much clean and less
    //error prone
    Foo i5 = {};
    Foo i6 = 1;
    Foo i7 = {1};
    Foo i8 = {1, 2};
    read_foo({});
    read_foo(1);
    read_foo({1});
    read_foo({1, 2});
}

