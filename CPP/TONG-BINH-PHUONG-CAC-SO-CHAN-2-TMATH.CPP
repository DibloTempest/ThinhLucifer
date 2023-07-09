#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t, s = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long s = 0;
        for (int i = 2; i <= 2 * n; i += 2)
        {
            s += i * i;
        }
        cout << s << "\n";
    }
}