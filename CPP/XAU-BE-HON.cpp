#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  string s1 = "";
  string s2 = "";

  for(int i = 0; i < M; i++) {
    s1 += to_string(N); 
  }

  for(int i = 0; i < N; i++) {
    s2 += to_string(M);
  }

  if(s1 < s2) {
    cout << s1 << endl;
  } else {
    cout << s2 << endl;
  }

  return 0;
}