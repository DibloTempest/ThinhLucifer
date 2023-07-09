#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long u1 = 1, u2 = 1, un;
    for (int i = 3; i <= n; i++)
    {
        un = 2 * u2 - u1;
        u1 = u2;
        u2 = un;
    }
    cout << un << endl;
    return 0;
}
