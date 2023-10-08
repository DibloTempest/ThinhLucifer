#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll dp[2510][2510];
int main()
{
    string s,t;
    ll x,y;
    cin>>x>>y;
    cin>>s>>t;
    t=" "+t;
    s=" "+s;
    for(ll i=1;i<=x;i++) dp[i][0]=0;
    for(ll i=1;i<=y;i++) dp[0][i]=0;
    for(ll i=1;i<=x;i++)
        for(ll j=1;j<=y;j++)
        if(t[j]==s[i]) dp[i][j]=dp[i-1][j-1]+1;
        else  dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
    cout<<dp[x][y];
}