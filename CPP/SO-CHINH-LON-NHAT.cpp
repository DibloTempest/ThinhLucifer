#include <bits/stdc++.h>
using namespace std;
bool ktr_scp(long long n)
{
    long long s = sqrt(n);
    if (n == s * s)
        return true;
    else
        return false;
}
long long n;
int main()
{
    cin >> n;
    long long s = sqrt(n);
    if (ktr_scp(n))
    {
        cout << (s - 1) * (s - 1);
    }
    else
        cout << s * s;
}