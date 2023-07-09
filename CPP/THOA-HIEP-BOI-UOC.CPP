#include <bits/stdc++.h>
using namespace std;
long long g, l, kq = 1e10, y, a, b, c;
int main()
{
    cin >> g >> l;
    long long t = l * g;
    for (long long a = g; a <= sqrt(t); a += g)
    {
        long long b = t / a;
        long long uc = __gcd(a, b);
        long long bc = (a * b) / uc;
        if (uc == g && bc == l)
            kq = min(kq, a + b);
    }
    if (kq == 1e10)
        kq = -1;
    cout << kq;
}