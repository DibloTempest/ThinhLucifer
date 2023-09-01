#include <bits/stdc++.h>
using namespace std;
const int base = 31;
const int mod = 1000000007;
string a,b;
long long pw[100005],h[100005]; 
int gethash(int l,int r)
{
    return ((h[r]-h[l-1]*pw[r-l+1])%mod+mod)%mod;
}
int main() 
{
    cin>>a>>b;
    int n=a.length();
    int m=b.length();
    a=" "+a;
    b=" "+b;
    pw[0]=1;
    for(int i=1;i<=100000;i++)
    {
        pw[i]=pw[i-1]*base%mod;
    }
    h[0]=0;
    for(int i=1;i<=m;i++)
    {
        h[i]=(h[i-1]*31+b[i]-'a'+1)%mod;
    }
    long long hasha=0;
    for(int i=1;i<=n;i++)
    {
        hasha=(hasha*31+a[i]-'a'+1)%mod
    }
     int cnt=0;
     for(int i=1;i<=m-n+1;i++)
     if(gethash(i,i+n-1)==hasha) cnt++;
     cout<<cnt;
}
