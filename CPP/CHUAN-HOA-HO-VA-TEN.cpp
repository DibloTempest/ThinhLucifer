#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int i;
    getline(cin, S);
    
    i = 0;
    while (i < S.size() - 1) {
        if (S[i] == ' ' && S[i + 1] == ' ') S.erase(i, 1);
        else i = i + 1;
    }
    if (S[0] == ' ') S.erase(0, 1);
    if (S[S.size() - 1] == ' ') S.erase(S.size() - 1, 1);
 
    S = " " + S + " ";
    for (i = 0; i < S.size() - 1; i++) {
        if (S[i] == ' ') {
            S[i + 1] = toupper(S[i + 1]);
            if (i == 0) cout << S[i + 1];
            else cout << " " << S[i + 1];
            i = i + 1;
        }
        else {
            S[i] = tolower(S[i]);
            cout << S[i];
        }
    }
    
    return 0;
