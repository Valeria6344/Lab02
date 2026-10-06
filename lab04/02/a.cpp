#include <iostream>
int main()
{
    int a = 123;           
    int b = 0b1010;         
    int c = 012;           
    int d = 0xA;       
    long e = 100L;       
    long long f = 100LL;  
    unsigned int g = 100U;   
    unsigned long h = 100UL;
    unsigned long long i = 100ULL;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;
    std::cout << h << std::endl;
    std::cout << i << std::endl;
    return 0;
}