#include <bits/stdc++.h>
using namespace std;
struct HS
{
    string hoten;
    float cannang;
    float chieucao;
    int tuoi;
};
HS hs[504];
int main()
{
    int n, tuoi = 1e9;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> hs[i].hoten;
        cin >> hs[i].cannang;
        cin >> hs[i].chieucao;
        cin >> hs[i].tuoi;
        tuoi = min(tuoi, hs[i].tuoi);
    }
    for (int i = 1; i <= n; i++)
    {
        if (hs[i].tuoi == tuoi)
            cout << hs[i].hoten << " " << hs[i].cannang << " " << hs[i].chieucao << " " << hs[i].tuoi << "\n";
    }
}
