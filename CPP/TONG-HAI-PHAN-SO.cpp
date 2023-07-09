#include <bits/stdc++.h>
using namespace std;
struct PS
{
    long long tu, mau;
};
PS x, y;
PS cong(PS x, PS y)
{
    PS T;
    T.tu = x.tu * y.mau + x.mau * y.tu;
    T.mau = x.mau * y.mau;
    return T;
}
main()
{
    cin >> x.tu >> x.mau;
    cin >> y.tu >> y.mau;
    PS T = cong(x, y);
    long long ucln = __gcd(T.tu, T.mau);
    cout << T.tu / ucln << "/" << T.mau / ucln;
}