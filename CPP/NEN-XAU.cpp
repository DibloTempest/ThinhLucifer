#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  
  string a = "";
  int d = 1;
  
  for (int i = 0; i < s.length(); i++) {
    if (i < s.length() - 1 && s[i] == s[i+1]) {
      d++;
    } else {
      a += to_string(d) + s[i];
      d = 1;
    }
  }
  
  cout << a << endl;
  
  return 0;
}
