#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter n and k:" << endl;
    cin >> n >> k;

    int maxScore = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int tempScore = i * j;
            if (tempScore > maxScore)
                maxScore = tempScore;
        }
    }
    cout << "The maximum score that the player can get is: " << maxScore << endl;

    return 0;
}