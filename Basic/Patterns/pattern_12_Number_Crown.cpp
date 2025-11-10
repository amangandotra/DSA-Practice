// Pattern 12 – Number Crown
// Numbers increasing on the left and decreasing on the right.
// 1      1
// 12    21
// 123  321
// 12344321

#include <iostream>
using namespace std;

int main(){
    cout << "Enter Number of rows";
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << j+1;
        }
        
        for(int l=0;l<(2*n)-(2*(i+1));l++){
            cout << " ";
        }

        for(int k=i+1;k>0;k--){
            cout << k;
        }
        cout << endl;
    }
}