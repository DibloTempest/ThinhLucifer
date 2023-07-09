#include <bits/stdc++.h>
#define ll long long
using namespace std;
int countNumbers(ll N)
{
    ll count = 0;
    for (ll i = 1; i <= N; i++)
    {
        string num = to_string(i);
        if (num[num.length() - 2] == num[num.length() - 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ll L, R;
    cin >> L;
    cin >> R;

    cout << countNumbers(R) - countNumbers(L - 1) << endl;

    return 0;
}
