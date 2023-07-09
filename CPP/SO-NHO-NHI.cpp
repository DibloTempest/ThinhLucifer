#include <bits/stdc++.h>
using namespace std;
long long a[100004];
main()
{
    for (int i = 1; i <= 5; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 5 + 1);
    cout << a[2];
}