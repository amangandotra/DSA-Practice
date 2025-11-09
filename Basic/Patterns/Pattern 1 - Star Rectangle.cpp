// Pattern 1 – Star Rectangle
// Print a solid rectangle of * characters, e.g., for n = 5 you print 5 rows and 5 columns of *.
// ***
// ***
// ***

#include <iostream>
using namespace std;

int main() {
    cout << "Enter number of lines";
    int n;
    cin >> n;

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout << endl;
    }
}