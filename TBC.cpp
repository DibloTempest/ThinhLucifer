#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("TCB.inp", "r", stdin);
    freopen("TCB.out", "w", stdout);
  int n;
  cin >> n;

  double a[n], sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  double tbc = sum / n;

  double mina = 1e9;
  int cl;
  for (int i = 0; i < n; i++) {
    if (abs(a[i] - tbc) < mina) {
      mina = abs(a[i] - tbc);
      cl = i;
    }
  }
    cout<<setprecision(2)<<fixed;
  cout << tbc << endl;
  cout<<setprecision(2) << a[cl] << endl<<fixed;

  return 0;
}