#include <bits/stdc++.h>
using namespace std;
long long n, a[104];
main()
{
	long long s = 0;
	cin >> n;
	for (long long i = 1; i <= n; i++)
	{
		cin >> a[i];
		s = s + a[i];
	}
	cout << s;
}