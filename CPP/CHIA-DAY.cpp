#include<bits/stdc++.h>
using namespace std;
long long t,n,a[200004];
main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(long long i=1;i<=n*2;i++) cin>>a[i];
		sort(a+1,a+n*2+1);
		cout<<a[n+1]-a[n]<<"\n";
	}
}
