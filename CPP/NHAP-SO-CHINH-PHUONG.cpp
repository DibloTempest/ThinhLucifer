#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    bool f = false;

    while (cin >> n)
    {
        long long z = sqrt(n);

        if (z * z == n)
        {
            cout << n << " ";
            f = true;
        }
        if (f == true)
            break;
    }
    if (f == false)
        cout << -1;
}