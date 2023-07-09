#include<bits/stdc++.h>
using namespace std;
long long n;
bool ktra(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false ;
    return true;
}
int Sum(int N)
{
    int S = 0;
    while (N > 0)
    {
        int t = N % 10;

        S = S + t; 

        N = N / 10;
    }
    return S;
}
main()
{
    long long d = 0;
    cin>>n;
    for(int i =10 ; i <= n ; i++)
    {
        if(ktra(Sum(i))) d++; 
    }
    cout << d;
}