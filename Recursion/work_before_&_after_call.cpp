// RECURSION
// Print the numbers 1 to n [work before call] 
// #include <iostream>
// using namespace std;
// void print(int x,int n){
//     if(x>n) return ;
//     cout<<x<<endl;
//     print(x+1,n);
   
// }
// int main (){
//     int n;
//     cout<<"Enter the n number";
//     cin>>n;
//     print(1,n);
    
// }

// RECURSION
// Print the numbers 1 to n [work after call] 
#include <iostream>
using namespace std;
void print(int x,int n){
    if(x>n) return ;
   
    print(x+1,n);
    cout<<x<<endl;
   
}
int main (){
    int n;
    cout<<"Enter the n number";
    cin>>n;
    print(1,n);
    
}