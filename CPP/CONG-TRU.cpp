#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000005
long long a, b;

long long x, y;

int main()
{
    cin >> a >> b >> x >> y;
    if (a > b)
        return cout << 0, 0;
    long long s = 0;
    while (a < b)
    {
        a += x;
        s++;
        if (a == b)
            return cout << s, 0;
        b -= y;
        s++;
        if (a == b)
            return cout << s, 0;
    }
    cout << 0;
}