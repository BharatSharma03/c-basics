
//  print this triangle 
//      *
//    * *
//  * * *
//* * * * 
// hint we use threee loops = 1st main(rows) then  inner loops = spaces and stars [FORMULA (n-i)]

#include <iostream>
using namespace std;
int main(){
  int row;
  cout<<"Enter a number of rows";
  cin>>row;
  for(int i=1;i<=row;i++){
    for(int k=1;k<=row-i;k++){
      cout<<" ";
    }
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    cout<<endl;
  }
  
}