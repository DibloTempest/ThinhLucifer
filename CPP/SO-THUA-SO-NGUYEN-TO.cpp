#include <bits/stdc++.h>
using namespace std;

const int nmax = 1e6 + 5;
bool f[nmax];

int main()
{
    long long n, count = 0;
    cin >> n;

    // Sàng để tìm tất cả các số nguyên tố từ 2 đến n
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (f[i])
        {
            for (int j = i * i; j <= n; j += i)
                f[j] = false;
        }
    }

    // Đếm số lượng thừa số nguyên tố khác nhau của n
    for (int i = 2; i <= n; i++)
    {
        if (f[i])
        {
            while (n % i == 0)
            {
                n /= i;
                count++;
            }
        }
    }

    if (n > 1) // Nếu n còn lại một thừa số nguyên tố
        count++;

    cout << count << endl;

    return 0;
}
