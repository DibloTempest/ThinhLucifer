#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;    // Read in n and m
    vector<int> x(m); // x stores the locations of the m faucets
    vector<int> r(m); // r stores the irrigation radii of the m faucets
    for (int i = 0; i < m; i++)
    {
        cin >> x[i] >> r[i];
    }
    int numWatered = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(i - x[j]) <= r[j])
            {
                numWatered++;
                break;
            }
        }
    }
    cout << numWatered << endl;
    return 0;
}