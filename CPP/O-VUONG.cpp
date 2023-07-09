#include <bits/stdc++.h>
using namespace std;
long long n, m, dem = 0, j = 1;
main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        dem = dem + j;
        j = j + 2;
    }
    j = 1;
    for (int i = 1; i < n; i++)
    {
        dem = dem + j;
        j = j + 2;
    }
    cout << (1 + dem) * dem / 2;
}