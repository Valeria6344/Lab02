#include <iostream>
int main(){
    int a = 1, b =2;
    int c = a++ +b;
    std::cout << a << b << c << std::endl;
    a = 1;
    b = 2;
    c = a+ ++b;
    std::cout << a << b << c << std::endl;
    a = 1;
    b = 2;
    c = a + + + b;
    std::cout << a << b << c << std::endl;
    return 0;
} 
