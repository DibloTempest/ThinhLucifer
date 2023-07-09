#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<int> numbers(N);
    vector<int> counts(1000001, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
        counts[numbers[i]]++;
    }

    for (int i = 0; i < N; i++)
    {
        if (counts[numbers[i]] > 0)
        {
            cout << numbers[i] << " " << counts[numbers[i]] << endl;
            counts[numbers[i]] = 0;
        }
    }

    return 0;
}
