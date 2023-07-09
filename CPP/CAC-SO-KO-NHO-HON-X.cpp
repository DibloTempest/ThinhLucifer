#include <bits/stdc++.h>
using namespace std;
long long n, x, a[104], d = 0;
int main()
{

    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= x)
            d++;
    }
    cout << d;
}