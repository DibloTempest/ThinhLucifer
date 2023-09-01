#include<bits/stdc++.h>
using namespace std;
long long cp,lt,loc=1;
string s;
int main()
{
    cin>>s;
    for(long long i=0;i<s.size();i++)
    {
        lt=s[i]-'a'+1;
        cp+=min(abs(loc-lt),min(loc+26-lt,26-loc+lt));
        loc=lt;
    }
    cout<<cp;
}