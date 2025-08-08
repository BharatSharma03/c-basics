// artithmetic operations 3,6,9,12 ...... upto n terms using for  loop

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int a=3;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=3;
    }
}


