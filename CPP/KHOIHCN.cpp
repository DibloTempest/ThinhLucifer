#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, x, y;
    cin >> a >> b >> c;
    cin >> x >> y;
    long long dodai = max(a, max(b, c));
    long long tong = a + b + c - dodai;

    if (x >= tong && y >= tong)
    {
        cout << "CO";
    }
    else
    {
        cout << "KHONG";
    }

    return 0;
}
