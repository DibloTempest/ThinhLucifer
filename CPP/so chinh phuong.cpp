#include<bits/stdc++.h>
using namespace std;
long long n;
main()
{
	cin>>n;
	long long k=sqrt(n);
	if(k*k==n) cout<<"YES";
	else cout<<"NO";
}
