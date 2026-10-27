#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x = 10, y = 3;
    cout << min(x = 15, x + y) << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}