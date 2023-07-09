#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
long long Catalan(ll n)
{
    if (n <= 1)
    {   
        return 1;
    }

    vector<long long> catalan(n + 1, 0);
    catalan[0] = 1;
    catalan[1] = 1;
    for (ll i = 2; i <= n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            catalan[i] = (catalan[i] + (catalan[j] * catalan[i - j - 1]) % MOD) % MOD;
        }
    }

    long long result = catalan[n];
    return result;
}

int main()
{

    ll n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;

        cout << Catalan(n) << endl;
    }

    return 0;
}
