#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll a, b, c, d, m;
    cin>>a>>b>>c>>d>>m;
    ll rua=a*m;
    ll luot=m/(c+d);
    ll tgiantho1=luot*c;
    ll du=m%(c+d);
    ll tgiantho2=min(du,c);
    ll tgiantho=tgiantho1+tgiantho2;
    ll tho=tgiantho*b;
    cout << abs(tho-rua);

    return 0;
}
