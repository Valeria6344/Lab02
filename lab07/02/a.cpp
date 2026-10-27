#include <iostream>
using namespace std;
int main() {
    int x = 2, y = 3, z = 4;
    ++x, z += 2 * x + 3 * y, ++y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    return 0;
}