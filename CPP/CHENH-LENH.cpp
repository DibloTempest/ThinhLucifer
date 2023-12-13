#include <bits/stdc++.h>
#define ll long long
using namespace std;
pair<ll,ll> a[1000005];
ll n,b[1000005],c[1000005],nn,nn1;
int main()
{
    cin>>n;
    for (ll i = 1; i <= n; i++)
    {
        cin>>a[i].first>>a[i].second;
        b[i]=abs(a[i].first-a[i].second);
        c[b[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(c[b[i]]>nn)
        {
            nn=c[b[i]];
            nn1=b[i];
        }
        if(c[b[i]]==nn)
        nn1=min(nn1,b[i]);
    }
    cout<<nn1<<"\n";
    for(int i=1;i<=n;i++)
    {
        if(b[i]==nn1)
        cout<<a[i].first<<" "<<a[i].second<<"\n";
    }
    
}
