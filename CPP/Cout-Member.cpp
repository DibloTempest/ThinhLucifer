#include <bits/stdc++.h>
using namespace std;
long long s = 0, n, a, b;
main()

{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        s = s + a * b / 100;
    }
    cout << s;
}