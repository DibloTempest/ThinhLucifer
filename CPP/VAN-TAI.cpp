#include <bits/stdc++.h>
using namespace std;
long long n, a[1000005], k, dem = 0;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
        if (a[i] > k)
        {
            cout << i << " " << a[i] - k << endl;
            dem++;
        }
    if (dem == 0)
        cout << "0";
}
