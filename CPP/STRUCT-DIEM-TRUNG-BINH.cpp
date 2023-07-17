#include <bits/stdc++.h>
using namespace std;
struct HS
{
    string hoten;
    float dtb;
} hs[100004];
main()
{
    int n, d = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> hs[i].hoten >> hs[i].dtb;
        if (hs[i].dtb >= 8.0)
            d = d + 1;
    }
    cout << d << "\n";
    for (int i = 1; i <= n; i++)
    {
        if (hs[i].dtb >= 8.0)
            cout << hs[i].hoten << "\n";
    }
}