#include <bits/stdc++.h>
using namespace std;
long long a, n,  mod = 1e9 + 7;
long long pw(long long a, long long n)
{
    if(n == 0)
        return 1;
    long long  tp = pw(a, n / 2);
    tmp = (tp * tp) % mod;
    if(n % 2 == 1)
        tp = tp * a % mod;
    return tp;
}

int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> n;
    cout << pw(a, n) % mod;
}
