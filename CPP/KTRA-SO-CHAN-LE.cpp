#include <bits/stdc++.h>
using namespace std;
long long n, t;
main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
            cout << "EVEN"
                 << "\n";
        else
            cout << "ODD"
                 << "\n";
    }
}