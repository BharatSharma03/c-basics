// Print the triangle in a 
// 1
// 01
// 101
// 0101


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int a=1;   // For a snake order we need to use a  third var and incremnet this in a loop
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}