#include<bits/stdc++.h>
using namespace std;
long long t,n,a[1000004];
main()
{
		cin>>n;
		for(long long i=1;i<=n;i++) 
			cin>>a[i];
		for(int i=1;i<=n/2;i++) tongtrai=tongtrai+a[i];
		for(int i=n/2+1;i<=n;i++) tongphai=tongphai+a[i];
		cout<<tongtrai*tongphai<<"\n";
}
