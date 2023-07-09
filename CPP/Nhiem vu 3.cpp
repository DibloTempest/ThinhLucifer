#include<bits/stdc++.h>
using namespace std;
long long a,b,n;
main()
{
	cin>>n>>a>>b;
	long long s=0;
	for(long long i=1;i<=n;i++)
	{
		s=s+a;
		a=a+b;
		
	}
	cout<<s;
}
