#include <bits/stdc++.h>
using namespace std;
bool f(long long n)
{
    long t = pow(n, 0.5);
    while (t * t < n)
        t++;
    while (t * t > n)
        t--;
    return t * t == n;
}
int main()
{
    long long t = 0, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (f(n))
            cout << "LE";
        else
            cout << "CHAN";
        cout << "\n";
    }
}