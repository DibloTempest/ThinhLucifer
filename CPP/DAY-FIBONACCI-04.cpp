#include <bits/stdc++.h>
using namespace std;
long long f[100];
void fibo()
{
    f[0] = f[1] = 1;
    for (long long i = 2; i <= 92; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}
long long n, x;
int main()
{
    fibo();
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == 92)
            cout << 1220016041 << 5121876738 << endl;
        else
            cout << f[x] << endl;
    }
}
