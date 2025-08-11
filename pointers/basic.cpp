// Pointers 
// hr pointer ke liye ALG SE type define krne pdte h 
// pointer syntax= type(int)* varrnname; or int* p=&x
// in pointers mostly we store addressess 
//  and if we want to access the value we use drefernce operator{*}

// #include <iostream>
// using namespace std;
// int main(){
//   int x=5;
//   cout<<x<<endl;  //the value of x
//   int* p=&x;
//   cout<<p<<endl; //Address of a x
//   cout<<*p<<endl;  // value of a x 
//   cout<<&p<<endl; // address of a p
  
// }

//  also we can update the value by [* dreference operator]
#include <iostream>
using namespace std;
int main(){
  int x=5;
  int* p=&x;
  cout<<p<<endl;
  cout<<x<<endl;
  *p=10;
  cout<<x<<endl;
  
}

