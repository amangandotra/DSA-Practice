// Pattern 4 – Repeated Number Pyramid
// Each row prints the same number repeated row number times.
// 1
// 22
// 333
// 4444
// 55555

#include <iostream>
using namespace std;

int main() {
    cout << "enter number of rows";
    int n;
    cin >> n;
    for (int i = 0; i<n;i++){
        for(int j=1;j<i+2;j++){
            cout << i+1;
        }
        cout << endl;
    }
}