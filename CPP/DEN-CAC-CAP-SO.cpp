#include <bits/stdc++.h>
using namespace std;
long long q, n;
int main()
{
    cin >> q;
    while (q--)
    {
        cin >> n;
        long long dem = 0;
        for (long long i = 1; i <= n / 2; i++)
        {
            if (i * 2 < n)
            {
                dem += (n - i) - i;
            }
        }
        cout << dem << '\n';
    }
}