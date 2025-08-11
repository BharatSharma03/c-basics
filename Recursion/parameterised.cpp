// Recusrion 
// print the sum of a n numbers [Parameterised]
//  Using void resturn  type
// IMP NOTE=[When we use void jo output hoti h vo list m hoti h ]


#include <iostream>
using namespace std;
void sum(int a , int total){
    if(a==0) return;
    total+=a;
    cout<<total<<endl;
    sum(a-1,total);
}
int main(){
    int a;
    int total=0;
    cout<<"enter the numeber";
    cin>>a;
    sum(a,total);
}

// 2 = USE int return type
// #include <iostream>
// using namespace std;
// int sum(int a , int total){
//   if(a==0) return total;
//   return sum(a-1, total+=a);
// }
// int main(){
//   int a,total,res;
//   total=0;
//   cout<<"Enter the number";
//   cin>>a;
//   res=sum(a,total);
//   cout<<res;
// }