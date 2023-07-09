#include <iostream>

using namespace std;
int ucln(int n, int m)
{
    while (m > 0)
    {
        int r = n % m;
        n = m;
        m = r;
    }
    return n;
}

int main()
{
    int n, m;
    {
        cin >> n >> m;
        cout << ucln(n, m) << endl;
    }
    int a = n / ucln(n, m);
    int b = m / ucln(n, m);
    cout << a << ' ' << b;
    return 0;
}