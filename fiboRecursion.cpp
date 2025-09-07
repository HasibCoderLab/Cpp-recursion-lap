// ================================================
//               Language: C++ / Cpp
//               Topic   : [Recursion]
//               Problem : 👉👉 [4]
//               Want    : FactRecursion
// ================================================
#include <iostream>
using namespace std;
int  fibo(int x ){
    if(x== 1 || x==2) return ;
    int result = fibo(x-1) * fibo(x-2);
    return result;

}
int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    cout << fibo(n);
    cout << endl;
    return 0;
}