#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long S = n * (n + 1) * (2 * n + 1) / 6;
    cout << S % 100;
    return 0;
}
