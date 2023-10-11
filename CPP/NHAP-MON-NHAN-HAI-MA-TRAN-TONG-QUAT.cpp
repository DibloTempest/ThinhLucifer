#include<bits/stdc++.h>
using namespace std;
long long a[101][101], b[101][101], c[101][101], m, n, p, x;
int main()
{
    cin >> m >> n >> p;
    for(long long i = 1; i <= m; i++)
    {
        for(long long j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(long long i = 1; i <= n; i++)
    {
        for(long long j = 1; j <= p; j++)
        {
            cin >> b[i][j];
        }
    }
    for(long long i = 1; i <= m; i++)
    {
        for(long long j = 1; j <= p; j++)
        {
            x=1;
            while(x<=n)
            {
                c[i][j]+=a[i][x]*b[x][j];
                x++;
            }
        }
    }
    for(long long i = 1; i <= m; i++)
    {
        for(long long j = 1; j <= p; j++)
        {
            cout<<c[i][j]<<' ';
        }
        cout<<endl;
    }
}