#include <bits/stdc++.h>
using namespace std;
long long n, a[104], d = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++)
        {
            if (a[i] > a[j])
                d++;
        }
    cout << d;
}