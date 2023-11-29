#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,m,l,dem=0;
int main()
{
	cin>>n>>m>>l;
	for(long long i=1;i<=n;i++)
		cin>>a[i];
	for(long long i=1;i<=n;i++)
	{
		if(abs(a[i]-m)<=l)
			dem++;
	}
	cout<<dem;
}
