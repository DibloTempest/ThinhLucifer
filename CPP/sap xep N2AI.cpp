#include <bits/stdc++.h>
using namespace std;
bool cmp(int x,int y)
{
    return(x<y);
}
bool cmp2(int x,int y)
{
    return(x>y);
}
int a[1000005],n;
int main()
{
    cin >> n;
    for (int i=1;i<=n*2;i++)
        cin >> a[i];
    sort (a+1,a+1+n,cmp);
    sort (a+n+1,a+1+n*2,cmp2);
    for (int i=1;i<=n*2;i++)
    {
        cout << a[i] << " ";
    }
}
