#include <bits/stdc++.h>
using namespace std;
struct PS
{
	long long tu, mau;
};
PS x, y;
PS hieu(PS x, PS y)
{
	PS t;
	t.mau = x.mau * y.mau;
	t.tu = x.tu * y.mau - x.mau * y.tu;
	return t;
}
main()
{
	long long c;
	cin >> x.tu >> x.mau;
	cin >> y.tu >> y.mau;
	PS t = hieu(x, y);
	c = t.tu;
	if (t.tu < 0)
	{
		c = -t.tu;
	}
	long long ucln = __gcd(c, t.mau);
	cout << t.tu / ucln << "/" << t.mau / ucln;
}
