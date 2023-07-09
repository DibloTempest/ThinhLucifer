#include <bits/stdc++.h>
using namespace std;
string p,a,d;
long long t;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>p;
    if(p[0]=='T')
    {
    a[0]='T';
    a[1]='i';
    a[2]='n';
    d="Yes";
    for(long long i=0;i<p.size();i++)
    {
        if(p[i]!=a[i%3])
        {
            d="No";
            break;
        }

    }
    cout<<d<<endl;
    }
    else if(p[0]=='i')
    {
    a[0]='i';
    a[1]='n';
    a[2]='T';
    d="Yes";
    for(long long i=0;i<p.size();i++)
    {
        if(p[i]!=a[i%3])
        {
            d="No";
            break;
        }

    }
    cout<<d<<endl;
    }
    else if(p[0]=='n')
    {
    a[0]='n';
    a[1]='T';
    a[2]='i';
    d="Yes";
    for(long long i=0;i<p.size();i++)
    {
        if(p[i]!=a[i%3])
        {
            d="No";
            break;
        }

    }
    cout<<d<<endl;
    }
    else cout<<"No"<<endl;
    }



}
