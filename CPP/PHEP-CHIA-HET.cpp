#include <bits/stdc++.h>
using namespace std;
long long a, b;
int main()
{

    while (cin >> a >> b)
    {
        if (b == 0)
            cout << -1 << "\n";
        else if (a % b == 0)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}