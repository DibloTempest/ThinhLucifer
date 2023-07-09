#include <bits/stdc++.h>
using namespace std;
long long dem_uoc(long long n)
{
    long long s=sqrt(n);
    long long dem=0;
    for(long long i=1;i<sqrt(n);i++)
        if(n%i==0)
            dem++;
    dem*=2;
    if(s*s==n)
     return dem+1;
    else return dem;
}
long long n,i=2,dem;
int main()
 {
	cin>>n;
	long long u=dem_uoc(n);
	while(i<=n)
    {
        if(n%i==0)
        dem++;
        while(n%i==0)
            n/=i;
        i++;
    }
    cout<<u-dem;
}
