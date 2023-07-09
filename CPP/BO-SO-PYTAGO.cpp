
#include <bits/stdc++.h>
using namespace std;
long long power(long long x, unsigned long long n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power(x, n / 2) * power(x, n / 2);
    else
        return x * power(x, n / 2) * power(x, n / 2);
}
long long order(long long num)
{
    long long n = 0;
    while (num != 0)
    {
        n++;
        num = num / 10;
    }
    return n;
}
bool isArmstrong(long long num)
{
    long long n = order(num);
    long long temp = num, sum = 0;
    while (temp != 0)
    {
        long long r = temp % 10;
        sum = sum + power(r, n);
        temp = temp / 10;
    }
    return (sum == num);
}

int main()
{
    long long n;
    cin >> n;
    if (isArmstrong(n))
        cout
            << "YES";
    else
        cout << "NO";
    return 0;
}