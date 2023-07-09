#include<bits/stdc++.h>
using namespace std;
long long n,a[200004],k,d=0;
main()
{
	cin>>n>>k;
	for(long long i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1,greater<long long>());
	for(long long i=k+1;i<=n;i++) 
	{
		d=d+a[i];
	}
	cout<<d;
}