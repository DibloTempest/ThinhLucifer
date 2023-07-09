#include <bits/stdc++.h>
using namespace std;
long long t = 1e12, i;
bool snt(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
string scp(long long a)
{
    if (a < 4)
        return "NO";
    long long b = sqrt(a);
    if (b * b == a && snt(b))
        return "YES";
    return "NO";
}
long long s[100005];
int main()
{
    long long a;
    cin >> a;
    for (i = 1; i <= a; i++)
        cin >> s[i];
    for (i = 1; i <= a; i++)
        cout << scp(s[i]) << "\n";
}