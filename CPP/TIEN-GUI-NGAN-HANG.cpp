#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    long long years = 0;
    cin >> n;
    cin >> m;
    while (n < m)
    {
        n += n * 0.1; // Tinh so tien sau mot nam
        years++;
    }
    cout << years;

    return 0;
}
