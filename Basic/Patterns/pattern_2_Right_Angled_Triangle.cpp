// Pattern 2 – Right-Angled Star Triangle
// Print a right-angled triangle of * where row 1 has 1 star, row 2 has 2 stars, up to n stars.
// *
// **
// ***
// ****

#include <iostream>
using namespace std;

int main() {
    cout << "Enter number of rows";
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for (int j = 0; j < i+1; j++)
            {
                cout << "*";
            }
        cout << endl;
    }
            
}