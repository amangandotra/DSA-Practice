// Pattern 10 – Half Diamond Star Pattern
// Stars increase up to `n`, then decrease.
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main() {
    cout << " Number of rows to mid";
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i=0;i<n;i++){
        for(int k=n-i;k>0;k--){
            cout << "*";
        }
        cout << endl;
    }   
}