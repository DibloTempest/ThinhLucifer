#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
int n, stt, k;
bool f[nmax];
void prime()
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for (int i = 2; i * i <= nmax; i++)
    {
        if (f[i])
            for (int j = i * i; j <= nmax; j += i)
                f[j] = false;
    }
}
int main()
{
    prime();
    cin >> n >> k;
    for (int i = n + 1; i <= nmax; i++)
    {
        if (f[i] == true)

        {
            cout << i << " ";
            stt++;
            if (stt == k)
                break;
        }
    }
}