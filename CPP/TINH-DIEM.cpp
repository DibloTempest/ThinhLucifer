#include <bits/stdc++.h>
using namespace std;
long long n, a[105], m, s = 0;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {

        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= m; i++)
    {

        if (a[i] < 0)
        {
            s = s + abs(a[i]);
        }
    }
    cout << s;
}