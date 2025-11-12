// Pattern 15 – Repeated Alphabet Triangle
// Each row prints the same letter repeated row times.
// A 
// B B
// C C C
// D D D D
// E E E E E


#include <iostream>
using namespace std;

int main() {
    cout << "Enter number of rows";
    int n;
    cin>> n;
    for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout << char('A'+i) << " ";
        }
        cout << endl;
    }
}