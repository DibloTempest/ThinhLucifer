#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            cout << i << " ";
    }
}