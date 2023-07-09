#include<bits/stdc++.h>
using namespace std;
long long a, b, c;
int main()
{
  freopen("TAMGIAC.inp","r",stdin);
    freopen("TAMGIAC.out","w",stdout);
  cin>>a>>b>>c;
  long long p=(a+b+c)/2;
  long double s=sqrt(p*(p-a)*(p-b)*(p-c));
  if( a<b+c && b<a+c && c<a+b ){
    if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
      cout<<"TAM GIAC VUONG";
    else if(a==b && b==c)
      cout<<"TAM GIAC DEU";
    else if(a==b || a==c || b==c)
      cout<<"TAM GIAC CAN";
    else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
      cout<<"TAM GIAC TU";
    else
      cout<<"TAM GIAC NHON";
    cout<<' '<<fixed<<setprecision(2)<<s;
    }
  else
    cout<<"NO";
}
