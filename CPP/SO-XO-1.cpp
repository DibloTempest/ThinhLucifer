#include <bits/stdc++.h>
using namespace std;
long long a[1000005], n, q, b[1005], x;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    cin >> q;
    while (q--)
    {
        cin >> x;
        cout << b[x] << endl;
    }
}
