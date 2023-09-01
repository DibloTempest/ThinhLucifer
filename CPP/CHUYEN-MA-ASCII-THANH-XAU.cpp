#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a=0;
    for (int i=0; i<s.length(); i++) {
        a=a*10+int(s[i])-48;
        if (97<=a && 122>=a) {
            cout << char(a);
            a = 0;
        }
        if (65<=a && 90>=a) {
            cout << char(a);
            a = 0;
        }
    }
}