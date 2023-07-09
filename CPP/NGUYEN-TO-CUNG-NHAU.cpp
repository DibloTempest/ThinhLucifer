#include<bits/stdc++.h>
using namespace std;
long long timY(long long n, long long X[]) {
    long long Y = 2; 

    while (true) {
        bool check = false;

        for (int i = 1; i <=n; i++) {
            if (__gcd(Y, X[i]) == 1) {
                check = true;
                break;
            }
        }
        if (!check) {
            return Y;
        }
        Y++;
    }
}

int main() {
    long long n;
    cin >> n;

    long long X[50];
    for (int i = 1; i <= n; i++) {
        cin >> X[i];
    }
    cout<<timY(n, X);
    return 0;
}
