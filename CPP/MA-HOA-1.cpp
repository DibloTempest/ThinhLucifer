#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    string q;
    cin >> q;
    for (int i=k-1; i>=0; i--) cout << q[i];
    for (int i=q.size()-1; i>=k; i--) cout << q[i];
}