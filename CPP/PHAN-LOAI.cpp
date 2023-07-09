#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], b[100004];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    long long d = 0;
    for (int i = 1; i <= 10000; i++)
        if (b[i] > 0)
            d++;
    cout << d << " \n";
    for (int i = 1; i <= 10000; i++)
        if (b[i] > 0)
            cout << i << " ";
}