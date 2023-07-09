#include <bits/stdc++.h>
using namespace std;
long long n, a[2000005], dem = 0, b[2000004], t, x;
int main()
{
    cin >> t >> n;
    for (int i = 1; i <= n; i++)
    {

        cin >> a[i];
        b[a[i]] = i;
    }

    while (t--)
    {
        cin >> x;
        if (b[x] != 0)
            cout << b[x] << endl;
        else
            cout << -1 << endl;
    }
}