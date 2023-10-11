#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("BOBASO.inp", "r", stdin);
  freopen("BOBASO.out", "w", stdout);
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long cnt = 0;
  long long cv = 0;

  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        if (a[i] + a[j] > a[k] && a[j] + a[k] > a[i] && a[k] + a[i] > a[j]) {
          cnt++;
          long long an = a[i] + a[j] + a[k];
          cv = max(cv, an);
        }
      }
    }
  }

  cout << cnt << " " << cv;

  return 0;
}