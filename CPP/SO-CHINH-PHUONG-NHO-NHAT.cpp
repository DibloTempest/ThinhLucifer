#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll N;
    cin >> N;
    ll k = 1;
    bool tim = false;
    while (!tim)
    {
        ll tichnk = N * k;
        ll can = sqrt(tichnk);
        if (can * can == tichnk)
            tim = true;
        else
            k++;
    }

    cout << k;

    return 0;
}
