#include <bits/stdc++.h>
using namespace std;
long long n,a[100005],sum,dem;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a+1,a+n+1);
    long long f=1;
    while(sum!=0)
    {
        if(sum>0)
        {
            sum-=a[n];
            n--;
        }
        else {
            sum-=a[f];
            f++;
        }
        dem++;
    }
    cout<<dem;

}

