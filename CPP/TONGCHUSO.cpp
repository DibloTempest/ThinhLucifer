#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TONGCHUSO.inp", "r", stdin);
    freopen("TONGCHUSO.out", "w", stdout);
    long long n, d = 0;
    cin >> n;
    for (int i = 1; i <= n; i = i * 10)
    {
        d = d + n - i + 1;
    }
    cout << d;
}