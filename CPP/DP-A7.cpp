#include <iostream>
#include <string>
using namespace std;

bool isSubstring(string s, string t)
{
    int j = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (s[j] == t[i])
        {
            j++;
            if (j == s.length())
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string s, t;
    cout << "Nhap xau T: ";
    getline(cin, t);
    cout << "Nhap xau S: ";
    getline(cin, s);
    if (isSubstring(s, t))
    {
        cout << "Xau S la xau con cua xau T";
    }
    else
    {
        cout << "Xau S khong phai la xau con cua xau T";
    }
    return 0;
}
