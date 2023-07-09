#include <bits/stdc++.h>
using namespace std;
int main()
{
    int F;
    cin >> F;
    float C = 5 * (F - 32) / 9;
    cout << fixed << setprecision(1) << C;
    return 0;
}