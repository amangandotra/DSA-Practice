// Pattern 9 – Diamond Star Pattern
// Combination of pyramid and inverted pyramid.
//    *   
//   *** 
//  *****  
// *******
// *******
//  *****
//   *** 
//    * 

#include <iostream>
using namespace std;

int main() {
    cout << "Enter Number of rows to mid";
    int n;
    cin >> n;

    for (int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        for(int j=0;j<n-i;j++){
            cout << " ";
        }

        cout<<endl;
    }
    for (int i=n;i>0;i--){
        for(int j=0;j<n-i+1;j++){
            cout << " ";
        }
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
        for(int j=0;j<n-i+1;j++){
            cout << " ";
        }
        cout<<endl;
    }

}