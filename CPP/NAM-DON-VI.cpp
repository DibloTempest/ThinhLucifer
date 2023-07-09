#include <bits/stdc++.h>
using namespace std;
long long n, a[105], d = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 10 == 5)
        {
            cout << a[i] << " ";
        }
    }
}