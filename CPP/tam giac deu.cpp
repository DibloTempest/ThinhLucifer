#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
main()
{
	cin>>a>>b>>c;
	if((a+b>c) and (c+b>a) and (a+c>b))
	{
		if(a==b==c) 
		{
			cout<<"YES";
		}
		
		else
		{
			cout<<"NO";
		}
	}
	else cout<<"NO";
}
