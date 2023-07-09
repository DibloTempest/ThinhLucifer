#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("KV.inp", "r", stdin);
    freopen("KV.out", "w", stdout);
    long long m, n;
    cin >> m >> n;
    long long A[100004];
    long long B[100004];
    for (int i = 1; i <= m; i++)
    {
        cin >> A[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> B[i];
    }

    sort(A, A + m);
    sort(B, B + n);

    long long i = 0;
    long long j = 0;

    while (i < m && j < n)
    {
        if (B[j] < A[i])
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    if (j == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
