#include <bits/stdc++.h>
#define ll long long
using namespace std;
string b;
ll dem6(ll number)
{
    string strNumber = to_string(number);
    ll count = 0;

    for (long long i = 0; i <= strNumber.length(); i++)
    {
        if (i == '6')
        {
            count++;
        }
    }

    return count;
}
int main()
{
    ll N, A[100005], s = 0;
    cin >> N;
    for (long long i = 1; i <= N; i++)
        cin >> A[i];
    for (long long i = 1; i <= N; i++)

        s = s + dem6(A[i]);

    cout << s;

    return 0;
}
