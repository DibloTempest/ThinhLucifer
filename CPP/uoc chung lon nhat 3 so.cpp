#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,c;
    cin >> a >> b >> c;
    long long UCAB=__gcd(a,b);
    long long UCLN=__gcd(UCAB,c);
    cout << UCLN;
}
