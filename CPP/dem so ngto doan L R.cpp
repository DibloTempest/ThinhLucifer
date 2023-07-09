#include <bits/stdc++.h>
using namespace std;
long long L, R, d = 0, T;
bool ktra(long long n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
main()
{
	cin >> T;
	while (T--)
	{
		cin >> L >> R;
		for (long long i = L; i <= R; i++)
		{
			if (ktra(i))
				d = d + 1;
		}
		cout << d << "\n";
	}
}
