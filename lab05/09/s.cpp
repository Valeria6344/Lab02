#include <iostream>
using namespace std;
int main() {
    long long a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    long long first = a * d + c * b;
    long long first_den = b * d;
    long long second = e * h + g * f;
    long long second_den = f * h;
    long long left = first * second_den;
    long long right = second * first_den;
    if (left > right)
        cout << 1;
    else if (left < right)
        cout << -1;
    else
        cout << 0;
    return 0;
}