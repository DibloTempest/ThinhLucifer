#include <bits/stdc++.h>
using namespace std;
long long tong_uoc(long long n)
{
    long long tuoc = 0;
    long long s = sqrt(n);
    for (long long i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
            tuoc = tuoc + i + n / i;
    if (s * s == n)
        return tuoc - s;
    else
        return tuoc;
}
int main()
{
    long long n;
    cin >> n;
    if (n < tong_uoc(n) - n)
        cout << 1;
    else
        cout << 0;
}
