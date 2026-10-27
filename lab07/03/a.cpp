#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> x(10);
    for (int i = -1; i < 9;)
	x[++i] = 1;
    for (int i = 0; i < 10; i++){
	cout << "x[" << i << "] = " << x[i] << endl;
    }
    return 0;
}