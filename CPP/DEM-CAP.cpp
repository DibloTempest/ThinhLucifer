#include <bits/stdc++.h>
using namespace std;
long long sum, n, a, b;
int main()
{
    cin >> n >> a >> b;
    for (long long i = a; i <= b; i++)
    {
        sum += n - i;
    }
    cout << sum;
}