// Cout the numbers
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num";
    cin>>n;
    int count=0;
   while(n !=0){
        n=n/10;
        count++;
        
    }
    cout<<count;
}