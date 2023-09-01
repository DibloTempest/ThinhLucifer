#include <bits/stdc++.h>
using namespace std;
string a,b;
int main ()
{
    cin>>a>>b;
    for( long long i=0;i<a.size()-1;i++)
    {
        cout<<a[i];
    }
    cout<<a[a.size()-1]-'0'+b[0]-'0';
}