#include <bits/stdc++.h>
using namespace std;
long long n, d = 1, a[1004][1004];
int main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = n; j >= 1; j--)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}