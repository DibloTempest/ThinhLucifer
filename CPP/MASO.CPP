#include<bits/stdc++.h>
using namespace std;
long long n, i, x = 1, k, a[1000006];
int main()
{
    freopen("MASO.inp", "r", stdin);
    freopen("MASO.out", "w", stdout);
    cin >> n >> k;
    for(long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    i = 1;
    while(k != 0)
    {
        if(a[i] != x)
        {
            cout << x << ' ';
            k--;
        }
        else i++;
        x++;
    }
}
