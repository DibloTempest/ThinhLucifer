#include <bits/stdc++.h>
using namespace std;
string x;
int dem = 0;
int main()
{
    cin >> x;
    for (int i = 0; i <= x.size() - 1; i++)
        if (x[i] % 2 != 0)
            dem++;
    cout << dem;
}