#include <bits/stdc++.h>
using namespace std;
long long n, s = 1;
main()
{
    cin >> n;
    cout << n << "! "
         << "= ";
    for (int i = 1; i <= n; i++)
        s = s * i;
    cout << s;
}