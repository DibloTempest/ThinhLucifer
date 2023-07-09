#include <bits/stdc++.h>
using namespace std;
bool ktr_scp(long long n)
{
    long long s = sqrt(n);
    if (n == s * s)
        return true;
    else
        return false;
}
long long n, l, r, dem;
int main()
{
    cin >> n >> l >> r;
    long long a = sqrt(r);
    long long b = sqrt(l - 1);
    cout << a - b;
}