#include<bits/stdc++.h>
using namespace std;
string s;
long long n, sum;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>s;
        if(s[0]=='T')
            sum+=4;
        if(s[0]=='C')
            sum+=6;
        if(s[0]=='O')
            sum+=8;
        if(s[0]=='D')
            sum+=12;
        if(s[0]=='I')
            sum+=20;
    }
    cout<<sum;
}