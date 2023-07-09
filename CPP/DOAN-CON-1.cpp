#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l[n];
    fill(l, l + n, 1);
    for (int i = 1; i < n; i++)
        if (a[i] >= a[i - 1])
            l[i] = l[i - 1] + 1;
    cout << *max_element(l, l + n);
}