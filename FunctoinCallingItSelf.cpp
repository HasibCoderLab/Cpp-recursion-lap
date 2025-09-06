
// ================================================
//               Language: C++ / Cpp
//               Topic   : [Recursion]
//               Problem : 👉👉 [1]
//               Want    : FunctoinCallingItSelf                     
// ================================================
#include <iostream>
using namespace std;
void Hi(){
    cout<<"Hi";
    Hi();
} 
int main(){
    Hi();
    return 0 ;
}
