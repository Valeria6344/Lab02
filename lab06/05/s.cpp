#include <iostream>
namespace First {
    int x = 15;
}
namespace Second {
    int x = 30;
}
int main() {
    std::cout << First::x << std::endl;
    std::cout << Second::x << std::endl;
    return 0;
}