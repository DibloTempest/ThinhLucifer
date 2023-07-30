#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll n;
    cin >> n;

    vector<ll> responses(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> responses[i];
    }

    unordered_set<ll> unique_responses;

    for (ll response : responses)
    {
        unique_responses.insert(response);
    }

    cout << unique_responses.size() << endl;

    return 0;
}