// Pattern 8 – Inverted Star Pyramid (Centered)
// Reverse of the centered pyramid.
// *******
//  *****
//   *** 
//    * 
#include <iostream>
using namespace std;
      
int main() {
    cout<<"Enter Number of rows";
    int n;
    cin >> n;
    for (int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        cout<<endl;
    }

}
