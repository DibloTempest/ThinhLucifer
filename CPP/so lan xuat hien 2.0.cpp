#include<bits/stdc++.h>
using namespace std;
int n,a[1000004],b[1000004];
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	b[a[i]]++;
	}
   	for(int i=1;i<=n;i++)
   	{
	   	cout<<a[i]<<" "<<b[a[i]]<<"\n";
	}
}
