#include <bits/stdc++.h>
using namespace std;
struct HS
{
    string hoten;
    float cannang;
    float chieucao;
    int tuoi;
};
HS hs1, hs2;
int main()
{
    cin >> hs1.hoten >> hs1.cannang >> hs1.chieucao >> hs1.tuoi;
    cin >> hs2.hoten >> hs2.cannang >> hs2.chieucao >> hs2.tuoi;
    if (hs1.tuoi < hs2.tuoi)
        cout << hs1.hoten << " " << hs1.cannang << " " << hs1.chieucao << " " << hs1.tuoi;
    else
        cout << hs2.hoten << " " << hs2.cannang << " " << hs2.chieucao << " " << hs2.tuoi;
}
