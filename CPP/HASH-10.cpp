#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
  int n = s.size();
  for(int i = 0; i < n/2; i++) {
    if(s[i] != s[n-i-1]) {
      return false;
    }
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  
  int count = 0;
  
  for(int i = 0; i < s.size(); i++) {
    for(int j = i; j < s.size(); j++) {
      string sub = s.substr(i, j-i+1);
      if(isPalindrome(sub)) {
        count++;  
      }
    }
  }
  
  cout << count << endl;
  
  return 0;
}