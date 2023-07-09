#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    long long maxa = a[n - 1] * a[n - 2];
    cout << maxa << endl;

    return 0;
}
