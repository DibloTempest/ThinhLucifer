#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    int count = 0;
    size_t pos = s.find(s1);
    while (pos != -1)
    {
        count++;
        pos = s.find(s1, pos + 1);
    }
    cout << count;
    return 0;
}
