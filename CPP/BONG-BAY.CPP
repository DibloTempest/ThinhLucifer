#include <bits/stdc++.h>
using namespace std;
string s,z;
long long n,t,b[55],dem;
int main()
{
    cin >> t;
    while(t--)
    {
        dem=0;
        cin>>n;
        for(long long i='A';i<='Z';i++)
            b[i]=0;
        char s;
        for(long long i=0;i<n;i++)
        {
            cin>>s;
            b[s]++;
            if(b[s]==1)
                dem++;
            dem++;
        }
        cout<<dem<<endl;
    }
}

