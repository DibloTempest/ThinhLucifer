#include <bits/stdc++.h>
using namespace std;
long long n;
bool ktra(long long n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
main()
{
    cin >> n;
    if (ktra(2 * n + 1))
        cout << "CO";
    else
        cout << "KHONG";
}