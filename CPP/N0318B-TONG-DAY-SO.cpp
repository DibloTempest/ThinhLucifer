#include <bits/stdc++.h>
using namespace std;
int n, a[100004], s = 0, i = 2;
main()
{
    cin >> n;
    if (n % 3 == 2)
        cout << (2 + n) * ((n - 2) / 3 + 1) / 2;
    else
        cout << "NO";
}