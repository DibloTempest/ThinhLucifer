#include <bits/stdc++.h>
using namespace std;
long long n, a[104];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    cout << a[1];
    return 0;
}