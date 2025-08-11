// Hollow rectangle
//  Tp print the +
// ********
// *      *
// *      *
// ********

#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the row";
    cin>>row;
    int col;
    cout<<"Enter the col";
    cin>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if((i==1 || j== 1 || i==row || j==col )){
                cout<<"*";
            }else{
                cout<< " ";
            }
        }
        cout<<endl;
    }
}