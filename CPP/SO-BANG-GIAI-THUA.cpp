#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int X, t;
    cin >> t;
    while (t--)
    {
        cin >> X;
        long long int count = 0;
        for (long long int i = 0; i < X; i++)
        {
            if (i != X)
                count++;
        }
        cout << count;
    }

    return 0;
}