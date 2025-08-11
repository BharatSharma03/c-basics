// print the givennumber in a right angle triangle also print its reverse pattern 
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<" "<<"*";
        }
        cout<<endl;
    }
}


//  Reverse triangle 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     for(int i=n;i>0;i--){
//         for(int j=i;j>0;j--){
//             cout<<" "<<"*";
//         }
//         cout<<endl;
//     }
// }
