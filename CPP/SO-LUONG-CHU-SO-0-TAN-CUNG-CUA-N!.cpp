#include <bits/stdc++.h>
using namespace std;

long long countzero(long long n)
{
    long long count = 0;
    for (int i = 5; n / i >= 1; i *= 5)

        count += n / i;

    return count;
}

int main()
{
    long long n;
    cin >> n;

    cout << countzero(n);

    return 0;
}
