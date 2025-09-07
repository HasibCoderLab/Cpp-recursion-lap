// ================================================
//               Language: C++ / Cpp
//               Topic   : [Recursion]
//               Problem : 👉👉 [4]
//               Want    : FactRecursion
// ================================================
#include <iostream>
using namespace std;
int fact(int x)
{
    if (x == 1)
        return 1;
    int result = x * fact(x - 1);
    return result;
    cout << fact(x);
}
int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    cout << fact(n);
    cout << endl;
    return 0;
}