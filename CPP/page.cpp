//#include <iostream>
//#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("page.inp","r",stdin);
//freopen("page.out","w",stdout);
  long long n,d=0;
cin>>n;
for(long long i=1;i<=n;i*=10)d+=n-i+1;
 cout<<d;
}
