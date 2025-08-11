
//  Start with the functions 


// IMP note 1  = AGR FUNCTION H [ VOID return type]   TO USME RETURN keyword KI JROORRT NI HOTI 
// IMP note 2  =  But agr void ko chod ke [int,main,char] etc jitne bhi functions h unme return keyword ki jroort hoti h
// IMP note 3  = Remember always main() function execuer 1st then others functions


#include <iostream>
using namespace std;

//  Using void return type
void sum(int a,int b ){
  cout<<a+b; 
}
// using int or any return type instead of a void
int add(int a,int b){
  return a+b; // we use return in int return type and listen return ke 2 kaam h = [1st ye break krta h mtlb  ye btaaata h ki function fully execute hogya h ]or   [listen return ke baad koi bhi statement print ni hoti h  ]
// 2nd work = ye return (a+b) 1 int ki trh consider hota h 
}

int main(){
  int a,b;
  cout<<"Enter the 1st number :";
  cin>>a;
  cout<<"Enter the 2nd number :";
  cin>>b;
  // sum(a,b); // we calll or ivoke the function 
  
  cout<<add(a,b); // in int return type  ye jo call h naa 1 interger ki trh kaam krti h mtlb isko hum print bhi kra skte h  
}