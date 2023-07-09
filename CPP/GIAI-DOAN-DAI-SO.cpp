#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d;
int main()
}
cin >> a >> b >> c >> d;
if ((a < c and b < c) or (c < a and d < a))
    cout << 0;
else
    cout << min(b, d) - max(a, c) + 1;
}
