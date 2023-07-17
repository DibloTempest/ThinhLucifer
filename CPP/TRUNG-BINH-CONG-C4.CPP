#include <bits/stdc++.h>
using namespace std;
long long n, k, a[100005];
int main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    cout << a[n];
}