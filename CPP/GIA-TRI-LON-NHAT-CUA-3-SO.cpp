#include <bits/stdc++.h>
using namespace std;
long long a, b, c, ln;
main()
{
	cin >> a >> b >> c;
	ln = max(a, b);
	ln = max(ln, c);
	cout << ln;
}