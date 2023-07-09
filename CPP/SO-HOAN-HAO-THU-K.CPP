#include <bits/stdc++.h>
using namespace std;
long long K;
long long sum_of_digits(long long n)
{
    long long sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{

    cin >> K;
    cout << K << 10 - sum_of_digits(K);
}
