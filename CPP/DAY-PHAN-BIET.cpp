#include <bits/stdc++.h>
using namespace std;
long long a[100], existed[1000001] = {-1};
int main()
{
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != existed[a[i]])
        {
            existed[a[i]] = a[i];
            cout << a[i] << " ";
        }
    }
    return 0;
}
