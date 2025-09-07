// ================================================
//               Language: C++ / Cpp
//               Topic   : [Recursion]
//               Problem : 👉👉 [3]
//               Want    : SumOfN
// ================================================
#include <iostream>
using namespace std;
int sum(int x)
{
    if (x == 1)
        return 1;

    return x + sum(x - 1);

    cout << sum(x);
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}