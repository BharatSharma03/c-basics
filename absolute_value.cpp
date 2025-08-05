// To print the absolute value of a user input
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(num<0){
        num=(-num);
        cout<<"This is a absolute number :"<<num<<endl;
    }else{
        cout<<"This is a positive number :"<<num<<endl;
    }
}