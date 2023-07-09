#include <bits/stdc++.h>
using namespace std;
long long sum = 0;
long long n;
int main()
{

    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        sum = sum + 4 * i * i;
    }
    cout << sum << endl;
}