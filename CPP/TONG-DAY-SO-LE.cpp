#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, sc, ssh, tong;
    cin >> x;
    if ((x - 1) % 2 == 0)
    {
        sc = x - 2;
        ssh = (sc - 1) / 2 + 1;
        tong = (sc + 1) * ssh / 2;
    }
    else
    {
        sc = x - 1;
        ssh = (sc - 1) / 2 + 1;
        tong = (sc + 1) * ssh / 2;
    }
    cout << tong;
}
