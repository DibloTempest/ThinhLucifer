#include <bits/stdc++.h>
using namespace std;
long long n, t;
bool shh(long long a)
{
	long long s = 1;
	for (long long i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			s = s + i + a / i;
			if (i * i == a)
				s = s - i;
		}
	}
	if (s == a)
		return 1;
	else
		return 0;
}
main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (shh(n))
			cout << "YES"
				 << "\n";
		else
			cout << "NO"
				 << "\n";
	}
}
