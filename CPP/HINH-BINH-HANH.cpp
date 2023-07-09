#include <bits/stdc++.h>
using namespace std;
long long n;
struct bh
{
    long long x, y;
} a, b, c;
main()
{
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    cout << c.x + a.x - b.x << " " << a.y + c.y - b.y;
}