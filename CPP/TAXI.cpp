#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int res, a, n, l, r;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a == 4)
            res++;
        else
            v.push_back(a);
    }

    sort(v.begin(), v.end(), greater<int>());
    r = v.size() - 1;
    for (l = 0; l <= r; ++l)
    {
        res++;
        int tmp = v[l];
        while (tmp + v[r] <= 4 && l <= r)
            --r, tmp += v[r];
    }
    cout << res;
}