// Pattern 11 – Binary Number Triangle
// Alternating 1s and 0s per row starting with 1.
// 1
// 01
// 101
// 0101
// 10101
#include <iostream>
using namespace std;

int main(){
    cout << "Enter number of rows";
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << (i+j+1)%2;
        }
        cout << endl;
    }
}