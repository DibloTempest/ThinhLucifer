#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			int sum = 0;
			int number = i;
			while (number != 0)
			{
				sum = sum + number % 10;
				number = number / 10;
			}
			if (n % sum == 0)
			{
				cout << 1;
				break;
			}
		}
		cout << 0;
	}
	return 0;
}