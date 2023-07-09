#include <bits/stdc++.h>
using namespace std;
long a, b;
int main()
{
    long long sotachra, sotachra1;
    long long s = 0, q = 0;
    cin >> a >> b;
    while (a > 1)
    {
        sotachra = a % 10;
        s += sotachra;
        a /= 10;
    }
    while (b > 1)
    {
        sotachra1 = b % 10;
        q += sotachra1;
        a /= 10;
    }
    cout << s + q;
}
