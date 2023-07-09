#include <bits/stdc++.h>
using namespace std;
long long n, a[200004], b[200004];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[a[i]] % 2 != 0)
        {
            cout << a[i];
            break;
        }
    }
}