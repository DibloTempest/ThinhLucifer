#include<bits/stdc++.h>
using namespace std;
long long n;
bool ktra(long long n)
{
    if (n<2) return 0;
    for (int i=2; i<=sqrt(n); i++)
        if (n%i==0)
            return 0;
    return 1;
}
 
long long tinh(long long n)
{
    long long s=0;
    for (int i=2; i<=n; i++)
        if (ktra(i)==1)
            s=s+i;
    return s;
}
main()
{
    cin >> n;
    cout << tinh(n);
}