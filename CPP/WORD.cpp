#include <bits/stdc++.h>
using namespace std;
string s;
long long h,t;
int main ()
{
    cin>>s;
    for(long long i=0;i<s.size();i++)
    {
        if(s[i]>='A' and s[i]<='Z')
            h++;
        else if(s[i]>='a' and s[i]<='z')
            t++;
    }
    if(h>t)
    {
         for(long long i=0;i<s.size();i++)
        {
            if(s[i]>='a' and s[i]<='z')
                s[i]=s[i]-'a'+'A';
            cout<<s[i];
        }
    }
    else
    {
        for(long long i=0;i<s.size();i++)
        {
            if(s[i]>='A' and s[i]<='Z')
                s[i]=s[i]-'A'+'a';
            cout<<s[i];
        }
    }
}