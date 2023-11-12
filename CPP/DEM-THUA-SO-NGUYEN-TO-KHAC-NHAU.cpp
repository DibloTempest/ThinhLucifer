#include <bits/stdc++.h>
using namespace std;
long long n,soluong;
int main()
{
    cin >> n;
    if (n%2==0)
    {
        soluong++;
        while(n%2==0)
            n=n/2;
    }
    for (long long i=3; i<=n; i+=2)
    {
        if (i*i>n)
            break;
        if (n%i==0)
            soluong++;
        while (n%i==0)
            n=n/i;
    }
    if (n!=1)
        soluong++;
    cout << soluong;
}
