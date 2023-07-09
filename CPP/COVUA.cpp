#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("COVUA.inp", "r", stdin);
    // freopen("COVUA.out", "w", stdout);
    int n, i, j;

    cin >> n;

    for (i = 1; i <= n; i++)

    {
        for (j = 1; j <= n; j++)

        {
            if (i % 2 == j % 2)

                cout << "W";
            else
                cout << "B";
        }
        cout << endl;
    }
}