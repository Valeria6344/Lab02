#include <iostream>
#include <typeinfo>
int main() {
    bool x = true;
    bool y = false;
    auto z = x + y;
    std::cout << "z = " << z << std::endl;
    std::cout << "type of z: " << typeid(z).name() << std::endl;
    return 0;
}