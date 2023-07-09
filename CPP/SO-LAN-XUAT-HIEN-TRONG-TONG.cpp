#include <bits/stdc++.h>
using namespace std;
struct ch
{
    int vt;
    long long gt;
};
ch a[17];
bool cmp(ch A, ch B)
{
    return ((A.gt > B.gt) or (A.gt == B.gt and A.vt < B.vt));
}
int main()
{
    long long n, m;
    cin >> n >> m;
    long long s = m + n;
    cout << s << endl;
    while (s > 0)
    {
        long long cs = s % 10;
        a[cs].gt++;
        a[cs].vt = cs;
        s = s / 10;
    }
    sort(a, a + 9, cmp);
    for (int i = 0; i <= 9; i++)
        if (a[i].gt > 0)
            cout << a[i].vt << " " << a[i].gt << endl;
}