#include<bits/stdc++.h>
using namespace std;
long long n,a[1003],l,r,j=1;
int main ()
{
    cin>>n>>l>>r;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(long long i=1;i<=r;i++)
    {

        if(i>=l and i!=a[j])
            cout<<i<<' ';
        if(i==a[j])
            j++;
    }
}


