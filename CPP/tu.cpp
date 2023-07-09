#include<iostream>
using namespace std;
long long a,b;
main()
{
	long S,R = 0;
	cin>>a>>b;
	for(int i = 1; i <= a; i++)
	{
    	if(a % i == 0)
    	{
      		S = S + i;
    	}
	}
	for(int i = 1; i <= b; i++)
	{
    	if(b % i == 0)
    	{
      		R = R + i;
    	}
  	}
  	cout<<S<<" "<<R;
/*	if(R==a and S==b) 
	{
		cout<<"YES"<<"\n";
		cout<<S<<" "<<R;
	}
	
  	else 
	{
		cout<<"NO"<<"\n";
		cout<<S<<" "<<R;
	}*/
}
