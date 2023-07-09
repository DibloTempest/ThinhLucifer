#include <bits/stdc++.h>
using namespace std;
long long n, a[1000005], d = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        cin >> a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] > 0)
        {
            cout << a[i];
            break;
        }
    }
}