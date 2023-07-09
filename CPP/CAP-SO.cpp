#include <bits/stdc++.h>
using namespace std;
long long n, a[104], t, c = 0;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
        {
            if (a[i] * i > a[i - 1] * (i - 1))
                c++;
        }
        cout << c << "\n";
    }
}