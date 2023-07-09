#include <bits/stdc++.h>
using namespace std;
long long solve(int n, int k)
{
    int x = k / (n - 1);
    int r = k % (n - 1);
    if (r == 0)
        return x * n - 1;
    else
        return n * x + r;
}
int main()
{
    long long a, k;
    cin >> a >> k;
    cout << solve(a, k);
}
