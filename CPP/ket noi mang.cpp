#include<bits/stdc++.h>
using namespace std;
long long n,s=0;
main()
{
	cin>>n;
	for(long long i=1;i<n;i++) s=s+i;
	cout<<s;
}
