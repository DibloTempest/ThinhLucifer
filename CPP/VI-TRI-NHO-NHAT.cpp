#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100000], d, min;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    min = 1;
    for (int i = 1; i <= n; i++)
        if (a[i] < a[min])
            min = i;
    cout << min;
}