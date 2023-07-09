#include <bits/stdc++.h>
#define MOD 1000000007;
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a = 1, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = (a + b) % MOD;
        a = b;
        b = c;
    }

    cout << b;

    return 0;
}
