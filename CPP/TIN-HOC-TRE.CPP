#include <bits/stdc++.h>
using namespace std;
long long n;
string s = " TINHOCTRE";

int main()
{
    cin >> n;
    n = ((n - 1) * n) / 2 + 1;
    long long k = n % 9;
    if (k == 0)
        cout << s[9];
    else
        cout << s[k];

    return 0;
}
