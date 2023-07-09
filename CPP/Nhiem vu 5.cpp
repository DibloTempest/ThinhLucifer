#include<bits/stdc++.h>
using namespace std;
long long x,s=0;
main()
{
	cin>>x;
		if(x<=100) s=x*2000;
		if(x>100 && x<=200) s=100*2000+(x-100)*3000;
		if(x>200 && x<=300) s=100*2000+100*3000+(x-200)*5000;
		if(x>300) s=100*2000+100*3000+100*5000+(x-300)*10000;
	cout<<s;
	
}
