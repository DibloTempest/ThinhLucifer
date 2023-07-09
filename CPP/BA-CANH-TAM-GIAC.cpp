#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
main()
{
	cin>>a>>b>>c;
	if((a+b>c) and (c+b>a) and (a+c>b)) cout<<"YES";
	else cout<<"NO";
}