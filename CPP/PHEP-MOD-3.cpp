#include <bits/stdc++.h>
using namespace std;
long long mod3(long long A, long long B, long long M)
{
    if (B == 0)
        return 0;

    long long T = mod3(A, B / 2, M) % M;

    if (B & 1)
        return ((T + T) % M + A % M) % M;
    else
        return (T + T) % M;
}

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    cout << mod3(a, b, c);
    return 0;
}