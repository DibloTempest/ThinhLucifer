#include <bits/stdc++.h>
using namespace std;
long long n, dem = 0;
long long k;
struct tien
{
    long long lai;
    long long dautu;
};

tien a[1005];
bool cmp(tien a, tien b)
{
    if (a.lai == b.lai)
    {
        return a.dautu > b.dautu;
    }
    else
    {
        return a.lai < b.lai;
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].dautu >> a[i].lai;
    }
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i].dautu << " " << a[i].lai << endl;
    }
}