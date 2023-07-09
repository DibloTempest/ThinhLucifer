#include <bits/stdc++.h>
using namespace std;

bool doixung(long long n)
{
    long long nguoc = 0, temp = n;
    while (temp > 0)
    {
        nguoc = nguoc * 10 + temp % 10;
        temp /= 10;
    }
    return n == nguoc;
}
long long demuocnt(long long n)
{
    long long d = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            d++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        d++;
    }
    return d;
}
long long sodep(long long a, long long b)
{
    long long d = 0;
    for (int i = a; i <= b; i++)
    {
        if (doixung(i) && demuocnt(i) >= 3)
        {
            d++;
        }
    }
    return d;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    cout << sodep(a, b) << endl;
    return 0;
}
