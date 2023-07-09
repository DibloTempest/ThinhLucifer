#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long sotachra;
    long long s = 0;
    cin >> n;
    for (; n != 0;)
    {
        sotachra = n % 10;
        s = s + sotachra;
        n = n / 10;
    }
    cout << s;
}
