#include<bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  int n = s1.length();

  for(int i = 0; i < n; i++) {
    if (s1[i] >= 'A' && s1[i] <= 'Z') {
      s1[i] = s1[i] - 'A' + 'a';
    }
    
    if (s2[i] >= 'A' && s2[i] <= 'Z') {
      s2[i] = s2[i] - 'A' + 'a'; 
    }
  }

  if (s1 < s2) {
    cout << "-1";
  }
  else if (s1 > s2) {
    cout << "1"; 
  }
  else {
    cout << "0";
  }

  return 0;
}