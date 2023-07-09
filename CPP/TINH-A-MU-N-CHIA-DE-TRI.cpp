#include <bits/stdc++.h>
#define nmax 1000000007
using namespace std;
long long a, n;
main()
{
    cin >> a >> n;
    long long kq = pow(a, n);
    cout << kq % nmax;
}