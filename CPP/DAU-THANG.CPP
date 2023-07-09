#include <bits/stdc++.h>
using namespace std;
long long n;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << "#";
    cout << "\n";
    for (int i = 1; i <= n - 1; i++)
        cout << "#";
    cout << "\n";
    for (int i = 1; i <= n - 2; i++)
        cout << "#";
}
