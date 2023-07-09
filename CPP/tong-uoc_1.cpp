#include<bits/stdc++.h>
using namespace std;
long long a,b;
long long tt(long long n)
{ 
	long long s=0;
	for(int i=1;i<=n;i++)
		if(n%i==0) s=s+i;
}
main()
{
	cin>>a>>b;
	cout<<tt(a);
}

