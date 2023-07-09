#include<bits/stdc++.h>
using namespace std;
long long n,d=0;
main()
{
	cin>>n;
	for(long long i=1;i<n;i++)
	{
		if(i%3==0) d=d+i;
	}
	cout<<d;
}