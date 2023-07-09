#include <bits/stdc++.h>
using namespace std;
long long n, d = 0;
main()
{
	cin >> n;
	for (int i = 5; i < n; i++)
	{
		if (i % 5 == 0)
		{
			d = d + i;
		}
	}
	cout << d;
}