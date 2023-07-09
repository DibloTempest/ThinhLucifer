#include<bits/stdc++.h>
using namespace std;
long long n,dem,a[100005];
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
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<n;i++)
    {
        for(long long j=i+1;j<=n;j++)
        {
            if(ktr_snt(abs(a[j]-a[i])))
                dem++;
        }
    }
    cout<<dem;
}

