#include<bits/stdc++.h>
using namespace std;
long long N,K,a[100004],s=0;
int main()
{
    cin>>N>>K;
    for (int i=1;i<=N;i++)
        cin >> a[i];
    sort (a+1,a+1+N,greater<long long>());
    for (int i=1;i<=K;i++) s=s+a[i];
    cout<<s;
}
