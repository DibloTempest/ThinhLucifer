#include <bits/stdc++.h>
using namespace std;
long long N, X, a[100004], b[1000004];
int main()
{
    cin >> N >> X;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    long long ans = 0;
    for (int i = 0; i <= N; i++)
    {
        ans = ans + b[X - a[i]];
    }
    cout << ans - 1;
    return 0;
}
