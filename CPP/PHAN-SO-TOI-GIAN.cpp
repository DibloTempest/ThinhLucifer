#include <bits/stdc++.h>
using namespace std;
struct PS
{
	long long tu, mau;
};
PS x;
main()
{
	cin >> x.tu >> x.mau;
	long long ucln=__gcd(x.tu,x.mau);
	cout<<x.tu/ucln<<"/"<<x.mau/ucln;
}
