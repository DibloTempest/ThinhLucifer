#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    long long dau=1,cuoi= 2e9,kq;
    while(dau<=cuoi)
    {
    long long giua=(dau+cuoi)/2;
        if(giua*(giua+1)/2==n)
        {
            kq=giua;
            cuoi=giua-1;
        }
        else dau=giua+1;
    }
    cout << kq;
}
