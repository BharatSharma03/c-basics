 //  Swap number using a pointer concept
//  IT is the concept of a [passed by reference or call by the refernce ]
#include <iostream>
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cout<<"Enter the number";
    cin>>a;
    cin>>b;
    cout<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b;
}