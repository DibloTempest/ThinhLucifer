#include<bits/stdc++.h>
using namespace std;
long long n,a[1000004],b[1004];
main()
{
    cin >> n;
    for(long long i=1;i<=n;i++)
    {
    	cin>>a[i];
    	b[a[i]]++;
	}
   	long long d=0;
   	for(long long i=1;i<=1000;i++)
   	{
   		d=max(d,b[i]);
	   }
	   cout<<d;
}