#include <iostream>
using namespace std;
int main(){    
    double a, b;
    cin >> a >> b;

    // 'cout << fixed' is used to set the number under decimal point 
    cout << fixed;
    cout.precision(12);
    cout << a / b << endl;
    
    return 0;
}
