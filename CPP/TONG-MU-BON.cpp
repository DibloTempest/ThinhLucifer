#include <bits/stdc++.h>
using namespace std;
long long n, s = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        s = s + i * i * i * i;
    cout << s;
}