#include <bits/stdc++.h>
using namespace std;
long long tong_uoc(long long n)
{
    long long sum = 0;
    long long s = sqrt(n);
    for (long long i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
            sum += i + n / i;
    if (s * s == n)
        return sum - s;
    else
        return sum;
}
long long a, b, q, r;
main()
{
    cin >> a >> b;
    q = tong_uoc(a) - a;
    r = tong_uoc(b) - b;
    if (q == b and r == a)
        cout << "YES"
             << " \n";
    else
        cout << "NO"
             << "\n";
    cout << q << " " << r;
}