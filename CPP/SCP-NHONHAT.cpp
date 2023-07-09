#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004];
bool ktra(long long n)
{
    long long k = sqrt(n);
    if (k * k == n)
        return true;
    else
        return false;
}

main()
{
    cin >> n;
    long long i = 1;
    while (ktra(n * i) != true)
        i++;
    cout << i;
}
