//  Tp print the + and hollow rectangle star
//*     *
// *  *
//   *
// *   *
//*     *


#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the row";
    cin>>row;
   
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if((i==j ) || j==(row+1)-i){
                cout<<"*";
            }else{
                cout<< " ";
            }
        }
        cout<<endl;
    }
}