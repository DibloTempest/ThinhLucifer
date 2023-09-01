#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll n, d = 0, m , k, c = 0;
string a  ;
map<string , bool> mp;
int main() 
{
    cin >> a;
    map<string , bool> mp;
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = i + 1 ; j <= a.length() ; j++)
        {
            if (a.substr(i,j-i) != a)
            mp[a.substr(i , j - i)] = true;
        }
    }
    for (auto i : mp) c++;
    cout << c;
}