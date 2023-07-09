#include<bits/stdc++.h>
using namespace std;
long long M,N;
main()
{
    cin>>M>>N;
    long long maxV = M*N;
    for(long long i = max(M,N) ; i<=maxV ; i++)
	{
        if(i % M == 0 && i % N == 0)
		{
            cout<<i<<" ";
        }

    }
}
