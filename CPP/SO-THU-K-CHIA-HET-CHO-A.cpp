#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, k;
    cin >> a;
    cin >> k;

    long long result = ((k - 1) / (a - 1)) + k;
    cout << result;

    return 0;
}
