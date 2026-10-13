#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a = 9007199254740993.0;
    double b = 9007199254740994.0;
    cout << fixed << setprecision(0);
    cout << a << endl;
    cout << b << endl;
    return 0;
}