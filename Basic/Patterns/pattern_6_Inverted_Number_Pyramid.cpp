// Pattern 6 – Inverted Number Pyramid
// Each row prints numbers from `1` up to `n - row + 1`.
// 12345
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;

int main() {
    cout << "Enter number of rows";
    int n;
    cin >> n;
    int k;
    for (int i = 0; i<n;i++){
        k = 0;
        for(int j=n-i;j>0;j--){
            k++;
            cout << k;
        }
        cout<<endl;
    }
}