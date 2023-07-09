#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004], b[10000004], d = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = 1; i <= 100; i++)
    {
        if (b[i] >= 2)
        {
            d = d + b[i] / 2;
        }
    }
    cout << d;
}