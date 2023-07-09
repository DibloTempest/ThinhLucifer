#include <bits/stdc++.h>
using namespace std;
long long a[10000000], sum = 0;
long long n;
int main()
{

    cin >> n;
    for (long long t = 0; t < n; t++)
    {
        cin >> a[t];
        sum = 0;
        for (long long i = 1; i <= a[t]; i++)
        {
            sum = sum + 4 * i * i;
        }
        cout << sum << endl;
    }
}