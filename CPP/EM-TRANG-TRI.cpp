#include <bits/stdc++.h>
using namespace std;
long long n;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       for(int j=1;j<=i*i;j++)
           cout << "*";
       cout << endl;
    }
}