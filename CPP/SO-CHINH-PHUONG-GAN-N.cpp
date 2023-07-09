#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long r = sqrt(n);
    long long s = (r + 1) * (r + 1);
    long long d = s - n;
    while ((r * r) - n >= d)
    {
        r--;
        d = (r * r) - n;
    }

    cout << (r + 1) * (r + 1);
    return 0;
}
