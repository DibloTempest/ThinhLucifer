 #include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long long a,b,stt=0;
bool f[nmax];
void prime()
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for(int i = 2; i * i <= nmax; i++)
    {
        if(f[i])
            for(int j = i * i; j <= nmax; j += i)
                f[j] = false;
    }
}
int main()
{
    prime();
    cin>>a>>b;
    for(long long i=a;i<=b;i++)
    {
        if(f[i] == true)
        {
            while (f[i] > 0) 
            {
                long long sotachra = f[i] % 10;
                sum += digit;
                n /= 10;
            }
        }
    }
    cout<<stt;
}
