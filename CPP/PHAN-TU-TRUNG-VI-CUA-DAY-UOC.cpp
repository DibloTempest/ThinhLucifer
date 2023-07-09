#include <bits/stdc++.h>

using namespace std;

long long n, a[1000006], b, c, d = 0;
int main()
{
    long long k = 0;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        if (n % i == 0)
        {
            k++;
            a[k] = i;
        }
    if (k % 2 == 0)
        cout << a[(k + 1) / 2];
    else
        cout << a[k / 2];
}