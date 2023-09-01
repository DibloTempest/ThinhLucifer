#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Tong_Uoc (ll n)
{
  ll s = 1, k = sqrt (n);
    for (long long i = 2; i <= k; ++i)
    {
        if (n % i == 0)
	    {
	        if (i * i == n)
	            s += i;
	        else if (i * i != n)
	             s += i + n / i;
	    }
    }

  return s;
}

int main ()

{
    freopen ("PP.inp", "r", stdin);
    freopen ("PP.out", "w", stdout);
    ll n, a[500005], d = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        if (Tong_Uoc (a[i]) > a[i])
        	d++;
    }

    cout << d;
}
