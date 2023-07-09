#include <bits/stdc++.h>
using namespace std;
long long dao(long long n)
{
    long long dao = 0;
    while (n != 0)
    {
        dao = dao * 10 + n % 10;
        n /= 10;
    }
    return dao;
}
long long n;
int main()
{
    cin >> n;

    if (dao(n) == n)
        cout << "YES";
    else
        cout << "NO";
}