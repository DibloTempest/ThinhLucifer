#include <bits/stdc++.h>
using namespace std;
long long n, a[1004], check = 0;
bool smm(long long n)
{
    while (n > 0)
    {
        if ((n % 10) == 6 || (n % 10) == 8)
            return true;
        n /= 10;
    }
    return false;
}
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (smm(a[i]))
        {
            cout << a[i] << " ";
            check++;
        }
    }
    if (check == 0)
        cout << -1;
}