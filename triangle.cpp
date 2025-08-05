// To check the sides of a triangle is a valid or not
#include <iostream>
using namespace  std;
int main(){
    int a,b,c;
    cout<<"Enter the 1st side of a triangle : ";
    cin>>a;
    cout<<"Enter the 2nd side of a triangle : ";
    cin>>b;
    cout<<"Enter the 3rd side of a triangle : ";
    cin>>c;
    if((a+b)>c && (b+c)>a && (a+c)>b){
        cout<<"It is a valid triangle";
    }else{
        cout<<"This is not a valid triangle";
    }

}