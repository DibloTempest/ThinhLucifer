#include <bits/stdc++.h>
using namespace std;
long long n, d,t,a[1000005];
int main()
{
    cin>>t;
    while(t--)
    {
        long long i=2;
        cin>>n;
        while(n!=1)
        {
            while(n%i==0)
                n/=i;
            i++;
        }
        cout<<i-1<<endl;
    }
}

