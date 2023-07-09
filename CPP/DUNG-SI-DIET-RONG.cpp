#include <bits/stdc++.h>
using namespace std;
long long s = 0, n, d[10005], c[1005];
int main()
{
    int s, n;
    int i, j, t = 0, k = 0, m = 0;
    int x[1001], y[1001];
    cin >> s;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
            if (x[i] > x[j])
            {
                t = x[i];
                x[i] = x[j];
                x[j] = t;
                k = y[i];
                y[i] = y[j];
                y[j] = k;
            }
    }
    for (i = 0; i < n; i++)
    {
        if (s > x[i])
        {
            m++;
            s += y[i];
        }
        else
        {
            cout << "NO";
            break;
        }
    }
    if (m == n)
        cout << "YES";
}
