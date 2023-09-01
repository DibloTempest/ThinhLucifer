#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000005

string st;

int x;

int main()
{
    cin>>st;
    x=0;
    if(st[0] != 'a') return cout<<st,0;
    for(int i=0;i<st.size();i++){
        if(st[i] == 'a') x++;
        else break;
    }
    for(int i=x;i<st.size();i++)
        cout<<st[i];
}