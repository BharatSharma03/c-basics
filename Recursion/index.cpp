// RECURSION
// Some theory concept of a recusrion 
// Recursion =  function ko call krta h itself
//  ye for loop ko replace krta h 
// Infinite looping or repetiton aati h 
//  infinitee looping se bchne  ke liye hum == BASECASE ka use krte h like {condition hmari recusrion ko infinite loop se bchne  ke liye}
//  This is an basic example of a recusrion 

// Print the numbers n to 1
#include <iostream>
using namespace std;
void print(int n){
  if(n==0) return; //basecase
  cout<<n<<endl;
  print(n-1); // function callitself
}
int main(){
  int n;
  cout<<"Enter the number";
  cin>>n;
  print(n);
}
