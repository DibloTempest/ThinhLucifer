#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll n, a[1000005];
bool NT[1000005];
void sang() {
    memset(NT, true, 1000005);
    NT[0] = NT[1] = false;
    for (ll i = 2; i <= sqrt(1000005); i++)
        if (NT[i])
            for (ll j = i * i; j <= 1000005; j += i)
                NT[j] = false;
}
int main() {
    sang();
    cin >> n;
    ll dem = 0, d = 0;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++) {
        if (a[i] == 1)
            dem++;
        if (NT[a[i]])
            d++;
    }
    cout << dem * d;
}
