#include <iostream>
int main() {
    typedef int I;
    I age = 19;
    std::cout << "typedef: " << age << std::endl;
    auto b = 99.5;
    std::cout << "auto: " << b << std::endl;
    int n = 10;
    decltype(n) dn = 20;
    std::cout << "decltype: " << dn << std::endl;
    double c = 7.8;
    int f = static_cast<int>(c);
    std::cout << "static_cast: " << f << std::endl;
    return 0;
}