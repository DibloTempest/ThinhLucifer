#include <iostream>
using namespace std;
int main() {
    int k;
    string s;
    cin >> k;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (97 <= s[i] - k and s[i] - k <= 122) s[i] = char(s[i] - k);
        else if (s[i] - k < 97) s[i] = char(s[i] - k + 26);
        else if (s[i] - k > 122) s[i] = char(s[i] - k - 26);
    cout << s;
}