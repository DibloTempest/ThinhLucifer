#include <bits/stdc++.h>
using namespace std;
long long C[105], D[105];
void pt(long long f[], long long n)
{
    long long d = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            d++;
            while (n % i == 0)
                n = n / i;
            f[d] = i;
        }
    }
    if (n > 1)
    {
        d++;
        f[d] = n;
    }
}
long long a, b;
main()
{
    cin >> a >> b;
    pt(C, a);
    pt(D, b);
    for (int i = 1; i <= 100; i++)
    {

        if (C[i] != D[i])
        {
            cout << "Khong";
            return 0;
        }
    }
    cout << "Co";
}