#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll amb(long long A, ll N)
{
    if (N == 0)
        return 1;
    long long tmp = amb(A, N / 2);
    tmp = (tmp * tmp) % mod;
    if (N % 2 == 1)
        tmp = (tmp * A) % mod;
    return tmp;
}