#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    bool ktra = false;

    while (cin >> n)
    {
        long long k = sqrt(n);

        if (k * k == n)
        {
            cout << n << " ";
            ktra = true;
        }
        if (ktra == true)
            break;
    }
    if (ktra == false)
        cout << -1;
}