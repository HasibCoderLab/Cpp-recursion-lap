// ================================================
//               Language: C++ / Cpp
//               Topic   : [Recursion]
//               Problem : 👉👉 [2.0]
//               Want    :Print1ToN 2.0              
// ================================================
#include <iostream>
using namespace std;
int printN(int x , int n){
    if(x>n) return 0 ;
    printN(x+1,n);
    cout<<x,n ;
    cout<< " " ;
    return 0 ;
}
int main(){
    int n;
    cout<< "Enter number " ;
    cin>> n;
    printN(1,n);
    return 0 ;
}