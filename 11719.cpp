//
// Problem Source : https://www.acmicpc.net/problem/11719
// Made by Seungyong Lee
//

#include <iostream>
#include <string>

using namespace std;

int main() { 
    string a = "";     // variable that store final result
    string b;          // temporary variable that get each input
    b = cin.get();     // get input in each character
 
    while(!cin.eof())  // judge whether this is the last charater of input
    {  
        a += b;        // add this to variable that will show final result
        b = cin.get(); // get input in each character
    }  
    
    cout << a << endl;  // print out result
    return 0;
}
