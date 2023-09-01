#include <bits/stdc++.h>

using namespace std;

bool ktraDX(string s)
{
    string res=s;
    reverse(res.begin(),res.end());
    return res==s;
}

int main()
{
    long long n,a,b;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>a>>b;
        s+=to_string(a+b);
    }
    if(ktraDX(s)) cout<<"YES";
    else cout<<"NO";
}