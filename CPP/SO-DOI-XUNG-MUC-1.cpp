#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll dem(ll x) {
    if (x < 10) return x;
    ll kq = 9 + (x / 10);
    ll s = x;
    while (s > 10) s = s / 10;
    if (s == (x % 10)) kq--;
    return kq;
}
int main() {
    long long l, r;
    cin >> l >> r;
    cout << dem(r) - dem(l - 1);
}
