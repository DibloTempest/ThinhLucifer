#include <bits/stdc++.h>
using namespace std;
long long a[100005], n, k, dem = 0;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (k == 1)
    {
        cout << "0";
        return 0;
    }
    sort(a + 1, a + 1 + n);
    for (int i = n; i >= 1; i--)
    {
        k = k - a[i];
        if (k <= 0)
        {
            cout << n - i + 1;
            return 0;
        }
        k++;
    }
    cout << "-1";
}