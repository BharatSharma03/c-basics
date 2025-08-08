// 4  TO CHECK  THE SMALLEST AGE AMONG THREE INPUTS 
// 10,20,30 = 10 is smallest  reverse= 30 greates  

#include <iostream>
using namespace std;
int  main()
{
    cout<<"Three people age"<<endl;
    int a,b,c;
    cout<<"Enter SPEED AGE :";
    cin>>a;
    cout<<"Enter TONY AGE:";
    cin>>b;
    cout<<"Enter LEAST AGE:";
    cin>>c;
    if(a<b){
        if(a<c){
            cout<<"smallest age"<<a;
        }else{
            cout<<"Smallest age"<<c;
        }
    }else{
        if(b<c){
            cout<<"smallest age"<<b;
            
            }else
            {
            cout<<"Smallest age"<<c;
            }
        }
        
    }