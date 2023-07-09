#include <bits/stdc++.h>
using namespace std;
long long n;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        if (i % 10 == 0)
            cout << endl;
    }
}