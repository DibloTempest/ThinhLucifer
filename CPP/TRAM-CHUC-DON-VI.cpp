#include <bits/stdc++.h>
using namespace std;
long long n, a;
main()
{
    cin >> n;
    cout << n / 100 << endl;
    cout << (n % 100) / 10 << endl;
    cout << (n % 100) % 10;
}