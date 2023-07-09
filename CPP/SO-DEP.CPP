#include <iostream>
#include <cmath>

using namespace std;

int sum_of_squares_of_digits(int n)
{
	int sum = 0;
	while (n > 0)
	{
		int digit = n % 10;
		sum += digit * digit;
		n /= 10;
	}
	return sum;
}

bool is_prime(int n)
{
	if (n < 2)
	{
		return false;
	}
	int sqrt_n = sqrt(n);
	for (int i = 2; i <= sqrt_n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	int count = 0;
	int i = 1;
	while (count < n)
	{
		if (is_prime(sum_of_squares_of_digits(i)))
		{
			count++;
		}
		i++;
	}
	cout << i - 1 << endl;
	return 0;
}
