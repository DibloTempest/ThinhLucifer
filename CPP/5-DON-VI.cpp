#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, a[104];

int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)  
    {
        if (a[i] % 5 == 0 and a[i] % 10 != 0)
            cout << a[i] << " ";
    }
}
