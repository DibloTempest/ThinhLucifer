#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], s = 0;
long long tong(long long n)
{
    long long sotachra;
    long long s = 0;
    while (n != 0)
    {
        sotachra = n % 10;
        s = s + sotachra;
        n = n / 10;
    }
    return s;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)

    {
        s = max(s, tong(a[i]));
    }
    for (int i = 1; i <= n; i++)

    {
        if (tong(a[i]) == s)
        {
            cout << a[i];
            return 0;
        }
    }
}