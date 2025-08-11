// print the triangle only odd
// 1
// 13
// 135
// 1357
// 13579

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            //formula = 2*j-1
            cout<<2*j-1;
        }
        cout<<endl;
    }
}