#include <bits/stdc++.h>
using namespace std;
long long n, a[1003],b[100005], t, k;
int  main()
{
    cin >> n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
        if(b[a[i]]>1)
            return cout<<0,0;

    }
    cout<<1;
}
