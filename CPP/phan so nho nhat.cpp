#include <bits/stdc++.h>
using namespace std;
long long n,x,y,t,m,a[100005];
int main()
{
    cin>>n;
    for (long long i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(long  long i=1;i<n;i++)
    {
        if(a[i]<0 and a[i+1]>0)
            {
                x=i;
                y=i+1;
                break;
            }
    }
    if(a[1]>0)
        cout<<a[1]<<' '<<a[n];
    else if(a[n]<0)
        cout<<a[n]<<' '<<a[1];
    else {
            m=min(a[n]/a[x],a[1]/a[y]);
        if(m==a[n]/a[x])
            cout<<a[n]<<' '<<a[x];
        else if(m==a[1]/a[y])
            cout<<a[1]<<' '<<a[y];

    }
}

