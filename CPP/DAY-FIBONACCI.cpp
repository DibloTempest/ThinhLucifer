#include <bits/stdc++.h>
using namespace std;
long long Fibo(long long n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return Fibo(n - 1) + Fibo(n - 2);
}
int main()
{
    long long n;
    cin >> n;
    cout << Fibo(n) % 1000000007;
}