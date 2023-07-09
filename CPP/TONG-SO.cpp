#include <bits/stdc++.h>
using namespace std;
long long n;
double sum = 0;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            sum = sum + 1 / i;
    }
    cout << setprecision(3) << fixed;
    cout << sum;
}
