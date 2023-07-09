#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n;
    cin >> n;
    long long sqr = sqrt(n);
    if(sqr*sqr == n){
        cout <<"yes";
    }
    else 
	{
        cout<<"no";
    }
}
