#include <bits/stdc++.h>
using namespace std;
string hoten;
float d1, d2, d3, d4, TB;
int main()
{
    cout << "Ho Va Ten : ";
    cin >> hoten;
    cout << "Nhap diem : ";
    cin >> d1 >> d2 >> d3 >> d4;
    TB = (d1 + d2 + d3 * 2 + d4 * 3) / 7;
    cout << setprecision(2) << fixed;
    if (TB >= 8)
        cout << "Ket qua hoc tap mon tin ban : " << hoten << endl
             << "DTB : " << TB << "\n"
             << "Loai : Gioi";
    if (TB < 8 and TB >= 6.5)
        cout << "Ket qua hoc tap mon tin ban : " << hoten << endl
             << "DTB : " << TB << "\n"
             << "Loai : Kha";
    if (TB < 6.5 and TB >= 5)
        cout << "Ket qua hoc tap mon tin ban : " << hoten << endl
             << "DTB : " << TB << "\n"
             << "Loai : TB";
    if (TB < 5)
        cout << "Ket qua hoc tap mon tin ban : " << hoten << endl
             << "DTB : " << TB << "\n"
             << "Loai : Yeu";
}