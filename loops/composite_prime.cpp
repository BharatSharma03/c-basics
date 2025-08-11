// to check the composite number => composite number is a number that can be divided its factor except by 1 and itself   and also check prime number
// prime number = The numbers which is only divied by itself and 1 
//  In short we say prime and composite inversely proportional 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    bool x=true;
    // for(int i=2;i<n;i++)   also i can use this 
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            x=false;
            break;
        }
       
    }
     if(x==true){
            cout<<"This is a prime number"<<" "<<n;
        }
        else{
            cout<<"This is a composite  num"<<" "<<n;
        }

}