#include <bits/stdc++.h>
using namespace std;
long long n, dem, a[1000006], b[1000006];
int main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
        if (b[a[i]] == 3)
        {
            cout << a[i] << ' ';
            b[a[i]] = 0;
            dem++;
        }
    }
    if (dem == 0)
    {
        cout << 0;
    }
}
