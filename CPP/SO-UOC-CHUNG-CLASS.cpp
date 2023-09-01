#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Dem_UocSo(ll N)
{
    ll dem = 0,k=sqrt(N);
    for (ll i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
            dem = dem + 2;
        if (k*k==N)
            dem = dem - 1;
    }

    return dem;
}

int main() {
  ll N;
  cin >> N;

  ll a[1004];
  for(ll i = 1; i <= N; i++) {
    cin >> a[i]; 
  }

  map<ll, ll> mp;

  for(ll i = 1; i <= N; i++) {
    ll num = a[i];
    ll s = Dem_UocSo(num);
    mp[s]++;
  }

  cout <<  mp.size() << "\n";

  for (auto x : mp) {
    cout << x.first<<" " << x.second << "\n";
  }

  return 0;
}