#include<bits/stdc++.h>
using namespace std;
string s;
long long d, n = 1, t, m, y, x = 0;
bool nt(long long x) {
    if (x < 2) return 0;
    for (long long i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= '0' && s[i] <= '9') {
            d++;
            n = n * 10 + s[i] - '0';
            t++;
        }
    else {
        y = pow(10, t);
        m = n % y;
        if (nt(m)) {
            x = max(x, n);
            t = 0;
        }
        n = 0;
    }
    cout << d << '\n' << x;

}
