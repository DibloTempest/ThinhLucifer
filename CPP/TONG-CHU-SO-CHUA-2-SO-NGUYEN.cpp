#include <bits/stdc++.h>
using namespace std;
long long a, b;
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
    cin >> a >> b;
    cout << tong(a) + tong(b);
}