#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int y = 10;
    (x++) = y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}