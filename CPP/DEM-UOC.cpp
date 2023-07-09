#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, uoc = 0, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (long long i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                uoc = uoc + 2;
            if (i * i == n)
                uoc = uoc - 1;
        }
        cout << uoc << endl;
    }
}
