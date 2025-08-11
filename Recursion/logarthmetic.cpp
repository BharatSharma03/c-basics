
// Recusrion 
//Power function logrithmetic
// ye basically humm tb use krte h jb hume recursion se bchna ho mtlb baar baar call krne se  normalll recursion m ye user prompt k ehisaab se chkta h jese maine 6 ikha to ye 6 baarui chelga
// but logarthmetic m ye 
#include <iostream>
using namespace std;
int pow(int a, int b){
  if(b==0) return 1;
  int half=pow(a,b/2);
  if(b%2==0){
    return half*half;
  }else{
    return a*half*half;
  }
}
int main(){
  int b;
  cout<<"Enter the number";
  cin>>b;
  int p;
  cout<<"Enter the number";
  cin>>p;
  cout<<pow(b,p);
}