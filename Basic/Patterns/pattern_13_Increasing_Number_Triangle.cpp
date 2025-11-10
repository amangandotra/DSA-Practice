// Pattern 13 – Increasing Number Triangle (Continuous Count)
// Numbers continue counting across rows.
// 1
// 2 3
// 4 5 6
// 7 8 9 10


#include <iostream>
using namespace std;

int main(){
    cout << "Enter number of rows";
    int n;
    cin >> n;
    int k=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            k++;
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
}