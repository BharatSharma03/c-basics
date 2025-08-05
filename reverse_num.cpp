// to reverse a number 
#include <iostream>
using namespace  std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    int res=0;
    while(num){
        int n = num%10;  //1st modulus 
        res= res*10+n; // then modulus + res
        num=num/10;    // divide num to remove the edcimal because of int 
    }
    cout<<res<<endl;
}

// 1st = To reverse a number . 
// 12345 == 54321

// solution (Important we know today  if we having a int type if want to store a float values it consider  this as a int not float  [eg in my phone])
// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter the number";
//     cin >> num;
    
    
//     cout << "The number is: " << num << endl;

//     int rev = 0;
//     int n;
//     while(num){
//         n = num % 10;
//         rev = rev * 10 + n;
//         num = num / 10;
//     }

//     cout << "The reverse number is: " << rev << endl;

//     return 0;
// }
