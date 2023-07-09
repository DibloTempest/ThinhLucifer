#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long ucln1 = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
        {
            long long ucln = __gcd(i, j);
            if (ucln > ucln1)
                ucln1 = ucln;
        }
    cout << ucln1;
    return 0;
}
