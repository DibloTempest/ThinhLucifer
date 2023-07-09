#include <bits/stdc++.h>
using namespace std;
long long n, a[1000000], b[1000009], ln = -1e9;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i] + 100]++;
    }
    for (int i = 0; i <= 200; i++)
        ln = max(ln, b[i]);
    for (int i = 0; i <= 200; i++)
        if (b[i] == ln)
            cout << i - 100 << " ";
    return 0;
}