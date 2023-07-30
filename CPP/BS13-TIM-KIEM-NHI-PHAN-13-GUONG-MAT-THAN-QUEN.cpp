#include <bits/stdc++.h>
using namespace std ;
long long   n, a[300001] ;
bool check(long long k)
{
    long long x=a[k]+n;
    long long c=n-1;
    for(long long i=1;i<=n;i++)
    {
        if(k==i)
            continue;
        if(a[i]+c>x)
            return false;
        c--;
    }
    return true;
}
int main()
{
    cin  >> n ;
    for(long long i =  1 ; i <= n ; i ++)
        cin  >> a [i] ;
    sort(a + 1, a + n + 1);
    long long l=1,r=n,res=0;
    long long m;
    while(l<=r)
    {
        m=(l+r)/2;
        if(check(m))
        {
            r=m-1;
        }
        else {
                l=m+1;
                res=m;
        }
    }
    cout<< n-res;
}