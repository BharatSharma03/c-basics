// Recusrion 
// Multiple calls 
// Write a function to calculate the nth fibonnacci series

#include <iostream>
using namespace std;
int fib(int n){
  if(n==1 || n==2) return 1;
  return fib(n-1)+fib(n-2);
}
int main(){
  int num;
  cout<<"Enter the number :";
  cin>>num;
  cout<<fib(num);
  
}