#include<bits/stdc++.h>
using namespace std;
long long n,a[200004];
main()
{
	cin>>n;
	for(long long i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<long long>());
		cout<<max(abs(a[1]+a[2]),abs(a[n]+a[n-1]));
}
