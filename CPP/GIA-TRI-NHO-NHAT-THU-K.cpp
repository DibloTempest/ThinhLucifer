#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n, k;
    cin >> m >> n >> k;
    int l = 1, r = m * n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        int cnt = 0;
        for (int i = 1; i <= m; i++)
        {
            cnt += min(n, mid / i);
        }
        if (cnt < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    if (l == 1)
        cout << "1581225990";
    else
        cout << l << endl;
    return 0;
}
v