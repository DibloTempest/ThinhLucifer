#include <bits/stdc++.h>
using namespace std;
long long a[1000005], b1[1000005], b2[1000005], b3[1000005];
int main()
{
    long long n, q, l, r;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            b1[i] = b1[i - 1] + 1;
            b2[i] = b2[i - 1];
            b3[i] = b3[i - 1];
        }
        else if (a[i] == 2)
        {
            b2[i] = b2[i - 1] + 1;
            b3[i] = b3[i - 1];
            b1[i] = b1[i - 1];
        }
        else
        {
            b3[i] = b3[i - 1] + 1;
            b1[i] = b1[i - 1];
            b2[i] = b2[i - 1];
        }
    }
    while (q--)
    {
        cin >> l >> r;
        cout << b1[r] - b1[l - 1] << " " << b2[r] - b2[l - 1] << " " << b3[r] - b3[l - 1];
        cout << endl;
    }
}