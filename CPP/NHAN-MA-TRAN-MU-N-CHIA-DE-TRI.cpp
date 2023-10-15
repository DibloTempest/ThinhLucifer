#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, MOD = 1e9 + 7;
struct an {
  ll x[15][15];
} a;
an na(an A, an B) {
  an C;
  for (ll i = 1; i <= m; i++)
    for (ll j = 1; j <= m; j++) {
      C.x[i][j] = 0;
      for (ll k = 1; k <= m; k++)
        C.x[i][j] = (C.x[i][j] % MOD + A.x[i][k] % MOD * B.x[k][j] % MOD) % MOD;
    }
  return C;
}
an mu(an A, ll N) {
  if (N == 1) return A;
  an kq = mu(A, N / 2);
  kq = na(kq, kq);
  if (N % 2 == 1) kq = na(kq, A);
  return kq;
}
int main() {
  cin >> n >> m;
  for (ll i = 1; i <= m; i++)
    for (ll j = 1; j <= m; j++) {
      cin >> a.x[i][j];
      a.x[i][j] %= MOD;
    }
  a = mu(a, n);
  for (ll i = 1; i <= m; i++) {
    for (ll j = 1; j <= m; j++)
      cout << a.x[i][j] << ' ';
    cout << '\n';
  }
}
