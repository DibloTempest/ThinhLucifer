#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004], b[1000004];
main()
{
	cin >> n;
	for (long long i = 1; i <= n; i++)
	{
		cin >> a[i];
		b[a[i]]++;
	}
	sort(a + 1, a + n + 1);
	long long d = 0;
	for (long long i = 0; i <= 1000004; i++)
	{
		if (b[i] > 0)
			cout << i << " " << b[i] << "\n";
	}
}