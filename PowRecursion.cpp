// ================================================
//               Language: C++ / Cpp
//               Topic   : [Recursion]
//               Problem : 👉👉 [5]
//               Want    : PowRecursion
// ================================================

#include <iostream>
using namespace std;
int power(int  x, int y){
    if(y==0) return 1;
    int result = x*power(x,y-1);
    return result ;
    cout<<power(x,y);


}
int main()
{
    int a , b;
    cout << "Enter Base ";
    cin >> a;

    cout << "Enter Power ";
    cin >> b;
    cout<<power(a,b) <<"\n" ;
    return 0;
}