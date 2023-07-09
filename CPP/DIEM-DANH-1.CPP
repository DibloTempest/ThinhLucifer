#include <bits/stdc++.h>
using namespace std;
long long n;
string a[10004],b[10004];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    for(long long i=1;i<=n-1;i++)
        cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n);
    for(long long i=1;i<=n;i++)
    {
        if(a[i]!=b[i])
        {
            return cout<<a[i],0;
        }
    }

    return 0;
}
