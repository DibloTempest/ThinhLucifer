#include <bits/stdc++.h>
using namespace std;
long long zip(long long n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    long long n;
    cin >> n;
    while (n > 9)
        n = zip(n);
    cout << n;
    return 0;
}