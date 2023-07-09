#include <bits/stdc++.h>
using namespace std;
struct hcn
{
    long long rong, dai;
} CD, CR;
main()
{
    cin >> CR.rong >> CD.dai;
    cout << (CR.rong + CD.dai) * 2 << "\n"
         << CR.rong * CD.dai;
}