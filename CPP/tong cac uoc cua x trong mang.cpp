#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,x,a[100004],s=0;
    cin >> n >> x ;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
    	if(x%a[i]==0) s=s+a[i];
    }
    cout<<s;
}
