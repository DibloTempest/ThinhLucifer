#include <bits/stdc++.h>
using namespace std;
long long n, a[1000005], mina = 1e6;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n - 1; i++)
        mina = min(mina, abs(a[i] - a[i + 1]));
    cout << mina;
}
