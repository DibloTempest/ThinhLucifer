#include <bits/stdc++.h>
using namespace std;
long long dem[10000];
int main()
{
    long long N;
    cin >> N;
    long long n = N;
    for (long long i = 0; i <= n; i++)
        dem[i] = 0;
    for (long long i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            dem[i]++;
            n /= i;
        }
    }
    for (long long i = 0; i <= N; i++)
    {
        if (dem[i])
        {
            cout << i << " " << dem[i] << "\n";
        }
    }
}