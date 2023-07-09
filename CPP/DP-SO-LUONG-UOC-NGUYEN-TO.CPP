#include<bits/stdc++.h>
using namespace std;
#define nmax 10000007
using namespace std;
bool f[nmax];
void prime() {
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for (int i = 2; i * i <= nmax; i++) {
        if (f[i]) {
            for (int j = i * i; j <= nmax; j += i) {
                f[j] = false;
            }
        }
    }
}

long long demuoc(long long n) {
    long long count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count += 2;
            if (i * i == n) {
                count--;
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    prime();

    long long a,b,d=0,t;
    cin>>t;
    while(t--)
    {
     cin >> a>>b;
        for (int i = a;i <= b; i++) 
        {
            long long uoc = demuoc(i);
            if (f[uoc]) 
                d++;
        }
        cout<<d<<"\n";  
        d=0;  
    }
 
}
