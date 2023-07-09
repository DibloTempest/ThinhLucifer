#include <bits/stdc++.h>
using namespace std;
long long n, t;
main()
{
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> n;
        cout << n * (n + 1) / 2 << "\n";
    }
}