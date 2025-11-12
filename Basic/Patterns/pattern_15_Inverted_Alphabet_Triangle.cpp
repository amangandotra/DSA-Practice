// Pattern 15 – Inverted Alphabet Triangle
// Print letters from `A` increasing across rows.
// A B C D E 
// A B C D
// A B C
// A B
// A


#include <iostream>
using namespace std;

int main() {
    cout << "Enter number of rows";
    int n;
    cin>> n;
    for (int i=n;i>0;i--){
        for (int j=0;j<i;j++){
            cout << char('A'+j) << " ";
        }
        cout << endl;
    }
}