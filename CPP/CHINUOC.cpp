#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long long d[nmax];
void sanguoc()
{
	for(long long i=1;i<=nmax;i++)
		for(long long j=i;j<=nmax;j+=i)
			d[j]++;
}

long long n,dem=0;
int main()
{
	sanguoc();
    cin>>n;
    for(int i=1;i<=n;i++)
    	if(d[i]) dem++;
    cout<<dem;
}

