#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    cout << a / b << endl
         << a % b << endl;
    cout << fixed << setprecision(2) << (double)a / b;
}