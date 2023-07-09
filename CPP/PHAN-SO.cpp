#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d;
main()
{
	while(cin>>a>>b>>c>>d)
	{
		if((a==0)+(b==0)+(c==0)+(d==0)>=3)
		{
			cout<<"NO"<<"\n";
		}
		else
		{
			if(a*b==c*d or a*c==b*d or a*d==b*c) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
		}
	}
}
