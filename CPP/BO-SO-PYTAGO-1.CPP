#include <bits/stdc++.h>
using namespace std;
long long n,dem;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {

        for(long long j=i+1;j<=n;j++)
        {
            if(sqrt(i*i+j*j)==int(sqrt(i*i+j*j)) and sqrt(i*i+j*j)<=n)
            {
                cout<<i<<' '<<j<<' '<<sqrt(i*i+j*j)<<endl;
                dem++;
            }

         }

    }
    if(dem==0)
        cout<<-1;

}

