#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
int main()
{
    cin >> a >> b >> c;
    long long m = min(min(a, b), c);
    cout << a + b + c - 3 * m;
}