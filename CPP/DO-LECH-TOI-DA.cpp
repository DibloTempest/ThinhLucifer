#include <bits/stdc++.h>
using namespace std;
long long n, a[200004], maxa = 0, mina = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == a[1])
            mina++;
        else if (a[i] == a[n])
            maxa++;
    }
    if (a[1] != a[n])
        cout << a[n] - a[1] << " " << maxa * mina;
    else
        cout << a[n] - a[1] << " " << mina * (mina - 1) / 2;
}