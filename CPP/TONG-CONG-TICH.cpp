#include<bits/stdc++.h>
using namespace std;
long long n;
long long tt(long long n) 
{
    long long s = 0;
    while(n>0)
   {
       s = s + n % 10;
       n = n / 10;
    }
    return s;
}
long long ttich(long long n) 
{
    long long s =1;
    while(n>0)
   {
       s = s * (n % 10);
       n = n / 10;
    }
    return s;
}
main()
{
    cin>>n;
    cout << tt(n) + ttich(n);
}
