// 5 QUADRANT CHECK IN WHICH LIES THE VALUES 
// 1st quadrant = ++
// 2nd quadrant= -+
// 3rd quadrant = --
// 4h quadrant = +-
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st number"<<endl;
    cin>>a;
    cout<<"Enter 2nd number"<<endl;
    cin>>b;
    if(a>=0 && b>=0){
        cout<<"This is lies in this 1st quadrant";
    }
    else if(a<0 && b>=0){
         cout<<"This is lies in this 2nd quadrant";
    }
    else if(a<0 && b<0){
         cout<<"This is lies in this 3rd quadrant";
    }else{
         cout<<"This is lies in this 4th quadrant";
    }
    }

