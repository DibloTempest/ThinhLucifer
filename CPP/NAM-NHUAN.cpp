#include <bits/stdc++.h>
using namespace std;
bool checkYear(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) ||
            (year % 400 == 0));
}
int main()
{
    int year;
    cin >> year;
    if (checkYear(year) == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}