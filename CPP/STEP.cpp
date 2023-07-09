#include <bits/stdc++.h>
using namespace std;
long long n, a[1004], d = 0;
bool isIncreasing(int n)
{
    if (n < 10)
        return false;
    int k = n % 10;
    n /= 10;
    while (n > 0)
    {
        int r = n % 10;
        if (r > k)
        {
            return false;
        }
        n /= 10;
        k = r;
    }
    return true;
}
int main()
{
    freopen("STEP.inp", "r", stdin);
    freopen("STEP.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (isIncreasing(a[i]))
            d++;
    }
    cout << d;

    return 0;
}
