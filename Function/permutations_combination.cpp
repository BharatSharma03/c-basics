//  To print the permutations and combinations using functions 
// Combination and permutation
// combination formula = nCr=n!/r!(n-r)!
// Permutation formula = nPr= n!/(n-r)!
// Listen  1st u need to  do factorial thn 


// Permutation

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
  int n;
  cout<<"Enter the 1st number ";
  cin>>n;
  int r;
  cout<<"Enter the 2nd number ";
  cin>>r;
  int a=fact(n);
//   int b=fact(r);
  int c=fact(n-r);
  cout<<a/c;
}

// // Combination
// #include <iostream>
// using namespace std;
// int fact(int a){
//     int f=1;
//     for(int i=1;i<=a;i++){
//         f*=i;
//     }
//     return f;
// }
// int main(){
//   int n;
//   cout<<"Enter the 1st number ";
//   cin>>n;
//   int r;
//   cout<<"Enter the 2nd number ";
//   cin>>r;
//   int a=fact(n);
//   int b=fact(r);
//   int c=fact(n-r);
//   cout<<a/(b*c);
// }
