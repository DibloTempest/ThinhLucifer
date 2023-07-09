#include <bits/stdc++.h>
using namespace std;
long long a, b;
int main()
{
    cin >> a >> b;
    long long n = a * b;
    long long s = n % 100;
    if (s % 3 == 0)
        cout << "YES ";
    else
        cout
            << "NO";
}