#include <bits/stdc++.h>
using namespace std;
long long n;
long long tongchuso(long long x)
{
    long long sotachra = 0;
    while(x != 0)
    {
        sotachra += x % 10;
        x /= 10;
    }
    return t;
}
int main()
{
    cin >> n;
    cout<<tongchuso(n-1)+1;
}