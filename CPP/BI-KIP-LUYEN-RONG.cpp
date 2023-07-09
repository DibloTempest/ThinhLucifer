#include <bits/stdc++.h>
using namespace std;
struct ch
{
    int x, y;
};
ch a[1004];
bool cmp(ch A, ch B)
{
    return (A.x < B.x or (A.x == B.x and A.y > B.y));
}
int n, s;
main()
{
    cin >> s >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].x >> a[i].y;
    sort(a + 1, a + n + 1, cmp);
    int d = 0;
    for (int i = 1; i <= n; i++)
        if (s > a[i].x)
        {
            s = s + a[i].y;
            d++;
        }
        else if (s < a[i].y)
        {
            cout << "NO"
                 << "\n"
                 << n - d;
            return 0;
        }
    cout << "YES";
}