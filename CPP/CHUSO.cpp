#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CHUSO.inp", "r", stdin);
    freopen("CHUSO.out", "w", stdout);
    int n;
    int sotachra;
    int s = 0, d = 0;
    cin >> n;
    while (n != 0)
    {
        sotachra = n % 10;
        s += sotachra;
        d++;
        n /= 10;
    }
    cout << s << " " << d;
}