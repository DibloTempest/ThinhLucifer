#include <bits/stdc++.h>
using namespace std;
long long Zeros(int n)
{
    long long count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }
    return count;
}

int main()
{
    freopen("BZERO.inp", "r", stdin);
    freopen("BZERO.out", "w", stdout);
    long long n;
    cin >> n;
    int numZeros = Zeros(n);
    cout << numZeros;
    return 0;
}
