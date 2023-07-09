#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], cs = 1;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] > a[cs])
            cout << i << endl;
        else
        {
            cout << cs << "\n";
            cs = i;
        }
    }
}
w