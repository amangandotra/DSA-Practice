// Pattern 14 – Alphabet Triangle
// Print letters from `A` increasing across rows.
// A 
// A B
// A B C
// A B C D
// A B C D E

#include <iostream>
using namespace std;

int main() {
    cout << "Enter number of rows";
    int n;
    cin>> n;
    for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout << char('A'+j) << " ";
        }
        cout << endl;
    }
}