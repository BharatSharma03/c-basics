// factorial of a numeber
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num";
    cin>>n;
    int fact=1;
    // for(int i=1;i<=n;i++){
    for(int i=n; i!=0;i--){
       
        fact=n*(n-1);
        cout<<fact<<endl;
        
    }
    
}