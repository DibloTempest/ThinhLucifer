#include <bits/stdc++.h>
using namespace std;
long long tong_uoc(long long n)
{
    long long sum = 0;
    long long s = sqrt(n);
    for (long long i = 1; i < sqrt(n); i++)
        if (n % i == 0)
            sum += i + n / i;
    if (s * s == n)
        return sum + s;
    else

        return sum;
}

int main()
{
    long long a, b;
    cin >>
        a >> b;
    if (b % 3 == 0)
        cout << tong_uoc(__gcd(a, b / 3));
    else
        cout << 0;
}