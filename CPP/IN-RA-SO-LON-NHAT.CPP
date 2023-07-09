#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int ln(int a, int b, int c)
{
    int maxx = -1e9;
    if (a > maxx)
        maxx = a;
    if (b > maxx)
        maxx = b;
    if (c > maxx)
        maxx = c;
    return maxx;
}
int nn(int x, int y, int z)
{
    int minn = 1e9;
    if (x < minn)
        minn = x;
    if (y < minn)
        minn = y;
    if (z < minn)
        minn = z;
    return minn;
}
main()
{
    cin >> a >> b >> c;
    cout << ln(a, b, c) << "\n"
         << nn(a, b, c);
}