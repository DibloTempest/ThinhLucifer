#include <bits/stdc++.h>
using namespace std;
bool ktra(long long n)
{
    long long k = sqrt(n);
    if (k * k == n)
        return true;
    else
        return false;
}
int main()
{

    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (ktra(n) == true)
            cout << "YES"   
                 << " \n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}