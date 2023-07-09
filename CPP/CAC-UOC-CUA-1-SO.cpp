#include <bits/stdc++.h>
using namespace std;
long long n;
main()
{
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            cout << i << " " << n / i << " \n";
    }
}