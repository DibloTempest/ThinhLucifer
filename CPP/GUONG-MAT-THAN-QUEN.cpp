#include <bits/stdc++.h>
using namespace std;
long long a[1000005], n, t, x;
bool tknp(long long x)
{
    int d = 1, c = n;
    while (d <= c)
    {
        int g = (d + c) / 2;
        if (a[g] > x)
            c = g - 1;
        else if (a[g] < x)
            d = g + 1;
        else
            return 1;
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    while (t--)
    {
        cin >> x;
        if (tknp(x))
            cout << "Y";

        else
            cout << "N";
        cout << endl;
    }
}