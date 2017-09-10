#include <iostream>
using namespace std;
int main(){
    int n;
    int min = 1, max = 1;
    int factor = 0;
    int result = 1;
    
    cin >> n;
    
    while(true){
        if(n >= min && n <= max){
            cout << result << endl;
            break;
        } else {
            factor += 6;
            min = max + 1;
            max += factor;
            result++;
        }
    }
    
    return 0;
}
