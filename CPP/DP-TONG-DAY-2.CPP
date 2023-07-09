#include<bits/stdc++.h>
using namespace std;
long long a[1000006],b[1000006],n,m,c,d;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    cin>>m;
    while(m--){
        cin>>c>>d;
        cout<<b[d]-b[c-1]<<'\n';
    }
    return 0;
}
