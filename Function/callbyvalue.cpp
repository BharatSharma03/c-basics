
//  This is the example of a call by value and call by reference 
// note pass by value m jo pass kre hue hote h actual paramaerter formal m vo just value pass hoti h container ni  or swap ni hota 
//  ye problem overcome hui h pass by refernce se usme &[ampersand lga dete the ]

//  pass by value
//  This is a [pass by value ] problem 
// #include <iostream>
// using namespace std;
// void fun(int a , int b){
//   int z=a;
//   a=b;
//   b=z;
// }
// int main(){
//   int a,b;
//   cout<<"Enter 1st number";
//   cin>>a;
//   cout<<"Enter 2nd number";
//   cin>>b;
//   cout<<a<<" "<<b<<endl;
//   fun(a,b);
//   cout<<a<<" "<<b;
// }


// Pass by reference 
#include <iostream>
using namespace std;
void fun(int &a , int &b){
  int z=a;
  a=b;
  b=z;
}
int main(){
  int a,b;
  cout<<"Enter 1st number";
  cin>>a;
  cout<<"Enter 2nd number";
  cin>>b;
  cout<<a<<" "<<b<<endl;
  fun(a,b);
  cout<<a<<" "<<b;
}