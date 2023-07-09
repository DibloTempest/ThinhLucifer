#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long min_n = 1;
    long long max_n = 9;
    for (int i = 1; i < n; i++)
    {
        min_n *= 10;
        max_n = max_n * 10 + 9;
    }
    cout << min_n << "\n"
         << max_n << "\n";

    long long count = 0;
    for (int i = min_n; i <= max_n; i++)
    {
        if (i % 2 == 0 && i % 5 == 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
