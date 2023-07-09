#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004], d = 1;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cout << a[1] << " \n";
    for (int i = 2; i <= n; i++)
        if (a[1] == a[i])
            d++;
    cout << d;
}