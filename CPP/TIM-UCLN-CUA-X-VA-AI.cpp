#include <bits/stdc++.h>
using namespace std;
long long n, a[10005], x;
int main()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (__gcd(a[i], x) > 1)
        {
            cout << i << " ";
        }
    }
}