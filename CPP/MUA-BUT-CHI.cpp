#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, p, k, st;
    cin >> n >> k >> p;
    if (n % (k + 1) == 0)
        st = (n / (k + 1) * k * p);
    else
        st = (n / (k + 1) * k * p) + (n % (k + 1) * p);
    cout << st;
}
