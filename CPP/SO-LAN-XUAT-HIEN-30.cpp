#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;
long long n, a[MAXN], b[MAXN];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[a[i]] > 0)
        {
            cout << a[i] << " " << b[a[i]] << endl;
            b[a[i]] = 0;
        }
    }
    return 0;
}
