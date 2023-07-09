#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long sotachra;
    long long ln = 0;
    cin >> n;
    while (n != 0)
    {
        sotachra = n % 10;
        ln = max(sotachra, ln);
        n = n / 10;
    }
    cout << ln;
}
