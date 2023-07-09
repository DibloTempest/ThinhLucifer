#include <bits/stdc++.h>
using namespace std;
long long a, b;
main()
{
    long long s = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        s = s + i;
    cout << s;
}