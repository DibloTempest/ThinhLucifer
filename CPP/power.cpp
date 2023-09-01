#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll q,n,b[100005];

int main()
{
    freopen("power.inp", "r", stdin);
    freopen("power.out", "w", stdout);

    cin>>q;
    while(q--)
    {
        cin>>n;
        for(ll i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        sort(b+1,b+n+1);
        cout<<b[n]-b[1]<<endl;
    }

}