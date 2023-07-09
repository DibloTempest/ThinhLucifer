#include<bits/stdc++.h>
using namespace std;
long long n,a[200004],d;
main()
{
    cin >> n;
    for (int i=1;i<=n;i++)
    cin >> a[i];
    sort (a+1,a+1+n);
    d=1;
    for (int i=1;i<=n;i++)
    {
        if(a[i]==a[i+1])
            d++;
            else
            {
            	if(d%2==1)
            	{
            		cout<<a[i];
            		return 0;
				}
				else d=1;
			}
    }
}
