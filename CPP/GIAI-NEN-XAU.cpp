#include<bits/stdc++.h>
using namespace std;
bool isDigit(char c) {

  if (c >= '0' && c <= '9') {
    return true;
  }

  return false;

}

int main() {

  string s;
  getline(cin, s);

  string a;

  for (int i = 0; i < s.length(); i++) {
    
    int d = 0;
    while (isDigit(s[i])) {
      d = 10 * d + (s[i] - '0');
      i++;
    }
    
    char c = s[i];
    while (d > 0) {
      a += c;
      d--; 
    }

  }

  cout << a << endl;

  return 0;
  
}