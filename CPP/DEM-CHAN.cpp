#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long sochan, sogacho;
    cin >> sogacho;
    cin >> sochan;
    long long soga = 0, socho = 0;
    for (soga = 0; soga <= sogacho; soga++)
    {
        socho = sogacho - soga;
        if (soga * 2 + socho * 4 == sochan)
        {
            break;
        }
    }
    cout << soga << " " << socho;
    return 0;
}
