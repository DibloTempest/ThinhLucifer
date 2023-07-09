#include <bits/stdc++.h>
using namespace std;
string s;
long long sum;
bool ktr_snt(long long n)
{
        for(long long i=2;i<= sqrt(n);i++)
        {
            if(n%i==0)
                return false;
        }
    return n>1;
}

int main()
{
    cin>>s;
    for(long long i=0;i<s.size();i++)
    {
        if(ktr_snt(s[i]-'0'))
            sum+=s[i]-'0';
    }
    if(sum==0)
        cout<<-1;
    else
    cout<<sum;
}


