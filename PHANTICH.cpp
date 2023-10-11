#include <bits/stdc++.h>
using namespace std;
long long n, dem;
int main()
{
    freopen("PHANTICH.inp", "r", stdin);
    freopen("PHANTICH.out", "w", stdout);
    cin >> n;
    for (long long i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                dem++;
                n = n / i;
            }
            if (dem != 0)
            {
                cout << i << " " << dem << endl;
            }
            dem = 0;
        }
    }
}
