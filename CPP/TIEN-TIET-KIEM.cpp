#include <bits/stdc++.h>
using namespace std;
long long n, s = 0, a = 2000;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = s + a;
        a = a + 1000;
    }
    cout << s;
}