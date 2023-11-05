#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,a[104],b[104],dem=0,maxa=-1e9,minb=1e9;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        maxa=max(maxa,a[i]);
    }
    for(int i=1;i<=n;i++) 
    {
        cin>>b[i];
        minb=min(minb,b[i]);
    }
    for(int i=maxa;i<=minb;i++)
        dem++;
    cout<<dem;
}
