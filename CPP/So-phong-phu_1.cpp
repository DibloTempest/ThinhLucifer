#include<bits/stdc++.h>
using namespace std;
long long N,s=1;
	
main()
{
	cin>>N;
	for(int i=2;i<=sqrt(N);i++)
		if(N%i==0) 
		{
			s=s+i+N/i;
			if(i*i==0) s=s-i;
		}
	if(N<s) cout<<1;
	else cout<<0;
}
