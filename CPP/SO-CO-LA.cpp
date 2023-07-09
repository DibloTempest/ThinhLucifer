#include <bits/stdc++.h>
using namespace std;
long long n, t, a[100004];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        cout << a[1] << " \n";
    }

    return 0;
}