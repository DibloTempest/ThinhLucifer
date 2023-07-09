#include <bits/stdc++.h>
using namespace std;
long long a[100005],n;
int main ()
{
    cin >> n;
    for (int i=1;i<=n;i++)
    cin >> a[i];
    sort (a+1,a+1+n,greater<long long>());
    for (int i=1;i<=n;i++)
    {
        cout << a[i] << " ";
    }
}
