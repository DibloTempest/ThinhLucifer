#include <bits/stdc++.h>
#define nmax 1000006
using namespace std;
long long r, l, a[1000006], q, s;
bool t[nmax];
void prime()
{
    memset(t, true, sizeof(t));
    t[0] = t[1] = false;
    for (int i = 2; i * i <= nmax; i++)
    {
        if (t[i])
            for (int j = i * i; j <= nmax; j += i)
                t[j] = false;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> q;
    prime();
    for (int i = 1; i < 1000006; i++)
    {
        s += t[i];
        a[i] = s;
    }
    while (q--)
    {
        cin >> l >> r;
        cout << a[r] - a[l - 1] << "\n";
    }
}
