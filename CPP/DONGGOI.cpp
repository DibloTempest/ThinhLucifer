#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("THETICH.inp", "r", stdin);
    freopen("THETICH.out", "w", stdout);
    long long n;
    cin >> n;
    long long n5 = n / 5;
    n = n % 5;
    long long n3 = n / 3;
    n = n % 3;
    long long n1 = n;
    cout << n5 << endl;
    cout << n3 << endl;
    cout << n1 << endl;

    return 0;
}
