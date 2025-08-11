

// print the power of a n   (return type)
#include <iostream>
using namespace std;

int pow(int b,int p){
  if(p==0) return 1;
  return b*pow(b,p-1);
}
int main(){
  int b;
  cout<<"Enter the base :";
  cin>>b;
  int p;
  cout<<"Enter the power :";
  cin>>p;
  cout<<pow(b,p);
}