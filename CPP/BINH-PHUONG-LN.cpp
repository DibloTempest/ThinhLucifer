#include <bits/stdc++.h>
using namespace std;
long long a, b;
main()
{
    cin >> a >> b;
    if (a * a > b * b)
        cout << a;
    else
        cout << b;
}