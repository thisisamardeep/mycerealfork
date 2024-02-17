//
// Created by amardeep on 17/02/24.
//
#include "iostream"

char rtt1(int y) {
    return y;
}

int main() {
    char (*rtt)(int);
//    char rtt1(int);
    rtt = rtt1;
//    std::string test1{};
//    std::string tes1t1();
//    std::cout << tes1t1.empty() << std::endl;
//    auto er = amar;

    auto rr = rtt(222);
    std::cout << rr << std::endl;

    return 0;
}
