#include <bits/stdc++.h>
using namespace std;
long long a[1000001], n, b[1000001], maxx = -1e9;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = 1; i <= 1000000; i++)
    {
        if (b[i] > maxx)
            maxx = b[i];
    }

    for (int i = 1; i <= 1000000; i++)
    {
        if (maxx == b[i])
        {
            cout << i;
            return 0;
        }
    }
}