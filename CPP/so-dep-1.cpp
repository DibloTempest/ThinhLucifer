#include<bits/stdc++.h>
using namespace std;
long long a,b;
long long tuoc(long long n)
{
	long long s=0;
	for(long long i=1;i<=n;i++)
	{
		
		if(n%i==0) 
			s=s+i+n/i;
	}
}
main()
{
	cin>>a>>b;
	//if(tuoc(a)==b and tuoc(b)==a) cout<<"YES";
	//else cout<<"NO";
	cout<<tuoc(a)<<" "<<tuoc(b);
}
