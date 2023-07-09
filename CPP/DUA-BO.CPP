#include <bits/stdc++.h>
using namespace std;
long long n,a[100005],sum=0;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(long long i=1;i<=n;i++)
    {
        long long dem=0;
        while(a[i]==a[i+1])
        {
            dem++;
            i++;
        }
        sum+=(dem+1)*dem/2;
    }
    cout<<sum;
}

