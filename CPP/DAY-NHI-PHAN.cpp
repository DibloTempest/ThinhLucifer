#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, s;
    cin >> n;
    s = 1;
    for (long long i = 1; i <= n; i++)
        s = s * 2;
    cout << s;
}