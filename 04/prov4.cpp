#include <iostream>
int sum(int a, int b){
    return a + b;
}
int main(){
    int a = 10;
    int b = 5;
    int arr[3] = {10, 20, 30};
    int c = sum(a, b);
    std::cout << c << std::endl;
    int d = (a + b)*2;
    std::cout << d << std::endl;
    int e = arr[1];
    std::cout << e << std::endl;
    return 0;
}