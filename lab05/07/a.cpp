#include <iostream>
#include <limits>
using namespace std;
int main(){
    double s = numeric_limits<double>::quiet_NaN();
    if(s != s)
	cout << "yes";
    return 0;
}