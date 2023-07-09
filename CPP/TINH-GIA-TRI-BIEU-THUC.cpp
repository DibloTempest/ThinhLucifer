#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004];
main()
{
    long long s = 0;
    cout << "NHAP N : ";
    cin >> n;
    cout << "NHAP A[I] : ";
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << "CAC PHAN TU TRONG MANG LA : ";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
        s = s + a[i];
    }
    cout << endl;
    cout << "TONG CAC PHAN TU LA : ";
    cout << s;
}