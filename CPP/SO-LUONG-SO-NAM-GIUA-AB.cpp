#include <bits/stdc++.h>
using namespace std;
long long a, b;
int main()
{
    cin >> a >> b;
    cout << (b - 1) / 2 - a / 2 - (b - 1) / 6 + a / 6;
}