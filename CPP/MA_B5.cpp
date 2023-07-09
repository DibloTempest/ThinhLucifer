#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long long a, b, stt = 0;
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
long long tong(long long n)
{
    long long sotachra;
    long long s = 0;
    while (n != 0)
    {
        sotachra = n % 10;
        s = s + sotachra;
        n = n / 10;
    }
    return s;
}
int main()
{
    freopen("MA_B5.inp", "r", stdin);
    freopen("MA_B5.out", "w", stdout);
    prime();
    cin >> a >> b;
    for (long long i = a; i <= b; i++)
    {
        if (f[tong(i)] == true)
        {
            stt++;
        }
    }
    cout << stt;
}