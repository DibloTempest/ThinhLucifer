#include<bits/stdc++.h>
using namespace std;
struct HS
{
	int ts;
	int ms;
};
bool cmp(HS x,HS y)
{
	return(x.tuoi<y.tuoi);
}
HS a[30];
int main()
{
	int n;
	cin>>n;
	for(long long i=1;i<=n;i++) 
	{
		cin>>a[i].hoten;
		cin>>a[i].namsinh;
		cin>>a[i].tuoi;	
	}
	sort(a+1,a+n+1,cmp);
	for(long long i=1;i<=n;i++) cout<<a[i].hoten<<" "<<a[i].namsinh<<" "<<a[i].tuoi;
}
