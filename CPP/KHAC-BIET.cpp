#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  string result;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
      result += " "; 
      i += 2;
    }
    else {
      result += s[i];
    }
  }

  while(result[0] == ' ') {
    result.erase(0, 1); 
  }

  while(result[result.length() - 1] == ' ') {
    result.pop_back();
  }
  
  cout << result << endl;

  return 0;
}