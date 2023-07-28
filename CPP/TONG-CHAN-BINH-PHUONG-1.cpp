#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long sum = -1e9, a[1004];
long long n;
int main()
{

    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i < n; i++)
        for (ll j = i + 1; i <= n; j += i)
            sum = max(sum, a[i] * a[i] + a[j] * a[j]);
    cout << sum << endl;
}