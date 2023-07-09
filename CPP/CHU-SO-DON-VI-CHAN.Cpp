#include <bits/stdc++.h>
using namespace std;
long long n;
main()
{
    cin >> n;
    long long a = n % 10;
    if (a % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}
