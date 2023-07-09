#include <bits/stdc++.h>
using namespace std;
long long n,s;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    cout<<n/3600;
    n=n-n/3600*3600;
    cout<<' '<<n/60<<' ';
    n=n-n/60*60;
    cout<<n;

}



