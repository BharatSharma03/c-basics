// print the triangle in a snake order
// 1
// 23
// 456
// 78910

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int a=1;   // For a snake order we need to use a  third var and incremnet this in a loop
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}