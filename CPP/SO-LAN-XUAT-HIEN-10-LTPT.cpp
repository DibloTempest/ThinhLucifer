#include <bits/stdc++.h>
using namespace std;
int n, a[1000004], b[1000004];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (b[a[i]] != 0)
        {
            cout << a[i] << " " << b[a[i]] << "\n";
            b[a[i]] = 0;
        }
    }
}