#include <bits/stdc++.h>
using namespace std;
int nguyenTo(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int x = n + 1;
    while (!nguyenTo(x))
        x++;
    cout << x;
    return 0;
}