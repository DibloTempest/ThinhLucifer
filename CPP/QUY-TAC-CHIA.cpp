#include <iostream>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if ((b != 0 and a / b == c) || (c != 0 and b / c == a) || (a != 0 and c / a == b))
        cout << "/";
    else
        cout << "NO";
}