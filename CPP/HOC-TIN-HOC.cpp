#include <bits/stdc++.h>
using namespace std;
long long a[1000004], n, b, c;
int main()
{
    cin >> n >> c;
    b = 0;
    if (c == 1)
    {
        cout << 0;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<long long>());
    for (int i = 1; i <= n; i++)
    {
        b = b + a[i];
        if (c <= b)
        {
            cout << i;
            return 0;
        }
        else
            b = b - 1;
    }
    cout << -1;
    return 0;
}