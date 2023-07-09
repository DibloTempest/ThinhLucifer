#include <bits/stdc++.h>
using namespace std;
struct heheboy
{
    long long x, y;
};
double area(heheboy a, heheboy b, heheboy c)
{
    return 0.5 * abs(a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y));
}
int main()
{
    heheboy a, b, c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    double A = area(a, b, c);
    if (A == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
