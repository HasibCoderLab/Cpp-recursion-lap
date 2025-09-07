// ================================================
//               Language: C++ / Cpp
//               Topic   : [Recursion]
//               Problem : 👉👉 [2]
//               Want    : Print1ToN                    
// ================================================

#include <iostream>
using namespace std;
int printN(int N){
  if(N==0) return 0;
    printN(N-1);
    cout<< N << " " ;
    return 0;
}
int main(){
  int n;
  cout<<"Enter Number " ;
  cin>>n;
 cout<< printN(n);
  cout<<endl;
    return 0;
}