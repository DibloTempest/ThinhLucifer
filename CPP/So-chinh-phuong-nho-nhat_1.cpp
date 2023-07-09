#include <bits/stdc++.h>
using namespace std;
main()
{
	long long n;
	cin >> n;
	long long a = sqrt(n);
	if (a * a == n)
	{
		cout << n;
	}
	else
	{
		if (abs(a * a - n) <= abs(a + 1) * (a + 1) - n)
			cout << a * a;
		else
			cout << (a + 1) * (a + 1);
	}
}
