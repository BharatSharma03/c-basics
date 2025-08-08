// print the multiplication table 
// giving the input from the user which table need to print (for eg = user enter 4 the 4 table produces)
// Important the input is not the iteration
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=n;i<=n*10;i=i+n){
        cout<<i<<endl;
    
    }
}