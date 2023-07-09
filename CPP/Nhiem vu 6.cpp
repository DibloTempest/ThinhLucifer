#include<bits/stdc++.h>
using namespace std;
long long n,m,d=0;
main()
{
	cin>>n>>m;
	while(n=n+n/10)
	{
		d=d+1;
		if(n>=m)
		{
			cout<<d;
			return 0;
		}
	}
	
}
