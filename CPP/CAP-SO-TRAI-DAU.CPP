#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004], duong = 0, am = 0;
int main()
{
    long long d = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            duong++;
        if (a[i] < 0)
            am++;
    }
    cout << duong * am;
}
