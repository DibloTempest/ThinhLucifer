#include <bits/stdc++.h>
using namespace std;
struct HS
{
    string hoten;
    float cannang;
    float chieucao;
    int tuoi;
};
bool cmp(HS x, HS y)
{
    return (x.tuoi < y.tuoi);
}
HS hs[104];
int main()
{
    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> hs[i].hoten;
        cin >> hs[i].cannang;
        cin >> hs[i].chieucao;
        cin >> hs[i].tuoi;
    }
    sort(hs + 1, hs + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        cout << hs[i].hoten << " " << hs[i].cannang << " " << hs[i].chieucao << " " << hs[i].tuoi;
        return 0;
    }
}
