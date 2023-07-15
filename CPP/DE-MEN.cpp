#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
int main()
{
    cin >> a >> b >> c;
    if (a >= c)
        cout << 1;
    else if ((c - b) % (a - b) == 0)
        cout << (c - b) / (a - b);
    else
        cout << (c - b) / (a - b) + 1;
}