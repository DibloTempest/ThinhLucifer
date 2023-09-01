#include <bits/stdc++.h>
using namespace std;
string a,b,c;
int t,h,m,i,n,k,x;
int main()
{
    cin>>a>>b;
    t=a.size();
    h=b.size();
    if(t>h)
    {
        m=t-h;
        for(i=0;i<m;i++) b='0'+b;
    }
    else if(t<h)
    {
        n=h-t;
        for(i=0;i<n;i++) a='0'+a;
    }
    k=a.size();
    c="";
    long long nh=0;
    for(i=k-1;i>=0;i--)
    { 
        x=(a[i]-48)+(b[i]-48)+nh;
        nh=x/10;
        x=x%10;
        c=(char)(x+48)+c;
        
    }
    if(nh>0) c="1"+c;    
    cout<<c;
}