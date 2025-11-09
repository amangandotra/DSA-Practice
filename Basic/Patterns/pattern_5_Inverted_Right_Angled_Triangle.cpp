// Pattern 5 – Inverted Right-Angled Star Triangle
// Stars decrease with each row.
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main() {
    cout << "Enter number of rows";
    int n;
    cin >> n;
    for (int i = 0; i<n;i++){
        for(int j=n-i;j>0;j--){
            cout << "*";
        }
        cout<<endl;
    }
}