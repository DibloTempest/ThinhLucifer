#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000004],b[1000004];
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	b[a[i]]++;
    	if(b[a[i]]>=2)
        {
            i--;
            n--;
        }
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
    {
    	m=max(b[a[i]],m);
	}
   	for(int i=1;i<=n;i++)
   	{
   	    if(b[a[i]]==m)
	   	cout<<a[i]<<" ";
	}
}

