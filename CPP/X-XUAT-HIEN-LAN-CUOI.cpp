#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004], vtri = 0, x;
int main()
{
    cin >> n;
    cin >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = n; i >= 1; i--)
    {
        if (a[i] == x)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}