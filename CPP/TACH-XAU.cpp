#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            temp += s[i];
        }
        else
        {
            if (temp.length() > 0)
            {
                cout << temp << " ";
                temp = "";
            }
        }
    }
    if (temp.length() > 0)
    {
        cout << temp;
    }
    return 0;
}
