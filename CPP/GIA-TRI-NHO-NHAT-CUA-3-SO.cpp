#include<bits/stdc++.h>
using namespace std;
long long a,b,c,ln;
main()
{
	cin>>a>>b>>c;
	ln=min(a,b);
	ln=min(ln,c);
	cout<<ln;
}