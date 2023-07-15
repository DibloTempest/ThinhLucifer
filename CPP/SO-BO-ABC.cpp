#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int count = 0;
    for (int A = 1; A <= N; A++)
    {
        for (int B = 1; B <= N; B++)
        {
            for (int C = 1; C <= N; C++)
            {
                if (A * B + C == N)
                {
                    count++;
                }
            }
        }
    }
    cout << count % 1000000007 << endl;
    return 0;
}