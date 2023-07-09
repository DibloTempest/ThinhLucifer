#include <bits/stdc++.h>
using namespace std;
int a[1000004], n, m, maxa = 0;
bool kt(int x);
{
    int a = 0;
    for (int i = 1; i < = n; i++)
    {
        if (a[i] > x)
        {
            s = s + a[i] - x;
            if (s > = m)
                return 1;
        }
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 1; i < = n; i++)
    {
        cin >> a[i];
        maxa = max(maxa, a[i]);
    }
    sort(a + 1, a + n + 1, greater<int>());
    int d = 1, c = maxa, res;
    while (d < = c)
    {
        int g = (d + c) / 2;
        if (kt(g))
        {
            d = g + 1;
            res = g;
        }
        else
            c = g - 1;
    }
}