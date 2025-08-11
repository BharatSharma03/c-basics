
//  To print the Pascal Triangle
// Hint = Combination nCr is used 
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1 
// 1 5 1010 5 1

// Combination
#include <iostream>
using namespace std;
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f*=i;
    }
    return f;
}
int main(){
  int num;
  cout<<"Enter the 1st number ";
  cin>>num;

  for(int i=0;i<=num;i++){
    for(int k=1; k<=num-i;k++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        int a=fact(i);
        int b=fact(j);
        int c=fact(i-j);
        cout<<a/(b*c)<<" ";
    }
    cout<<endl;
  }
  
}
