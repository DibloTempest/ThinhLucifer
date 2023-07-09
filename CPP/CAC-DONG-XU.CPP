#include<bits/stdc++.h>
using namespace std;
struct qua{
    long long a,b;

}; qua s[1001];
bool cmp(qua x, qua y)
{
    return x.a < y.a;
}
long long n,m;
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
        cin>>s[i].a;
    for(long long i=1;i<=n;i++)
        cin>>s[i].b;
    sort(s+1,s+n+1,cmp);
    for(long long i=1;i<=n;i++)
    {
        if(s[i].a+m>=s[i].b)
            m+=s[i].a;
    }
    cout<<m;
}

