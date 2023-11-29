#include <bits/stdc++.h>
#define nmax 1000005
#define ll long long
using namespace std;
ll tong_chu_so(long long n)
{
    ll tong=0;
    while (n!=0)
    {
        tong+=n%10;
        n/=10;
    }
    return tong;
}
int main()
{
   ios_base::sync_with_stdio(false),
   cin.tie(0), cout.tie(0);
   long long n,ans=-1;
   cin>>n;
   for (ll i=162 ; i>=1 ; i--){
        if (i == tong_chu_so(n-i))
        {
            ans=n-i;
            break;
        }
   }
   cout<<ans;

}
