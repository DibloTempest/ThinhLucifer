#include <bits/stdc++.h>
using namespace std;
long long a[1000001], n, ts[1000001], maxx;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ts[a[i]]++;
    }
    maxx = 0;
    for (int i = 0; i <= 1000000; i++)
    {
        if (maxx < ts[i])
            maxx = ts[i];
    }
    cout << maxx;
}