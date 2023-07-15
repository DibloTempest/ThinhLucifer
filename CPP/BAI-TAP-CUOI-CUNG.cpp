#include <bits/stdc++.h>
using namespace std;
long long n, k, a;
int main()
{
    cin >> n >> k >> a;
    if ((k + a - 1) % n == 0)
        cout << n;
    else
        cout << (k + a - 1) % n;
}