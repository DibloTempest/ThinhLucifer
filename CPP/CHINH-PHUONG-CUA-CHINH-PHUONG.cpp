#include<bits/stdc++.h>
using namespace std;
long long  n;
bool ktra(long long n)
{
    long long k = sqrt(n);
    if (k * k == n)
        return true;
    else
        return false;
}
main()
{
    cin >> n;
    if (ktra(n) and ktra(sqrt(n)))
        cout << "YES";
    else
        cout << "NO";
}