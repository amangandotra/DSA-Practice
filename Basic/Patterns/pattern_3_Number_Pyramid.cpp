#include <iostream>
using namespace std;

int main() {
    cout << "enter number of rows";
    int n;
    cin >> n;
    for (int i = 0; i<n;i++){
        for(int j=1;j<i+2;j++){
            cout << j;
        }
        cout << endl;
    }
}