#include <bits/stdc++.h>
using namespace std;
int a[1000004], b[10004], n, k;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    int dem = 0;
    for (int i = 1; i <= 1000; i++)
        if (b[i] == k)
        {
            cout << i << " ";
            dem++;
        }
    if (dem == 0)
        cout << -1;
}
