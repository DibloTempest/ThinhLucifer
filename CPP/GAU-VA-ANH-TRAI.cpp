#include<bits/stdc++.h>
using namespace std;
long long a, b, d = 0;
main()
{
    cin>>a>>b;
    while (a<=b)
    {
        d=d+1;
        a = a * 3;
        b = b * 2;
    }
    cout << d;
}