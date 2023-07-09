#include <bits/stdc++.h>
using namespace std;
long long n, p;
bool ktra(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
main()
{
    cin >> n;
    p = (n - 1) / 2;
    if (ktra(n) == false or ktra((n - 1) / 2) == false)
        cout << "No";
    else
        cout << "Yes";
}