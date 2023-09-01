#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i, j;
string S, Q;
int main()
{
    cin >> S >> Q;
    while(i < S.length() and j < Q.length())
    {
        if(S[i] > Q[j])
        {
            cout << S[i];
            i++;
        }
        else if(S[i] < Q[j])
        {
            cout << Q[j];
            j++;
        }
        else
        {
            ll a = i, b = j;
            while(S[a] == Q[b] and a < S.length() and b < Q.length())
            {
                a++;
                b++;
            }
            if(S[a] > Q[b])
            {
                cout << S[i];
                i++;
            }
            else
            {
                cout << Q[j];
                j++;
            }
        }
    }
    for(i; i < S.length(); i++)
        cout << S[i];
    for(j; j < Q.length(); j++)
        cout << Q[j];
}