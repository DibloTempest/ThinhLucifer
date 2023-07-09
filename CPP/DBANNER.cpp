#include <iostream>
using namespace std;

const int MAXN = 100000;
long long a[MAXN + 1], width[MAXN + 1];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        long long h = a[i];
        long long w = 1;
        while (i + w <= n && a[i + w] >= h)
        {
            w++;
        }
        width[i] = w;
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        long long w = width[i];
        for (int j = i; j < i + w; j++)
        {
            w = min(w, width[j]);
        }
        ans += w;
        i += w - 1;
    }
    cout << ans << endl;
    return 0;
}
