#include <bits/stdc++.h>
using namespace std;
long long k, a[100005];
int q;
long long tknp1(long long k)
{
    int d = 1, c = 1000000;
    while (d <= c)
    {
        long long g = (d + c) / 2;
        long long t = g * g * g - 2 * g + 5;
        if (t == k)
            return g;
        else if (t > k)
            c = g - 1;
        else
            d = g + 1;
    }
    return -1;
}
int main()
{
    cin >> q;
    while (q--)
    {
        cin >> k;
        cout << tknp1(k) << "\n";
    }
}