#include <bits/stdc++.h>
using namespace std;
long long n, a[104], t, c = 0;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (long long i = 1; i <= n; i++)
            cin >> a[i];
        for (long long i = 0; i < n; i++) //             5 0 10 2 4 1 6

        {
            for (long long j = i + 1; i <= n; j++)
                if (a[i] * i > a[j] * j)
                    c++;
        }
        cout << c << "\n";
    }
}