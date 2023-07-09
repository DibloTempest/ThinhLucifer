// #include <bits/stdc++.h>
// using namespace std;
// long long n, d = 0;
// bool f[10000004];
// void prime()
// {
//     memset(f, true, sizeof(f));
//     f[0] = f[1] = false;
//     for (int i = 2; i * i <= 10000004; i++)
//     {
//         if (f[i])
//             for (int j = i * i; j <= 10000004; j += i)
//                 f[j] = false;
//     }
// }
// long long dem_uoc(long long n)
// {
//     long long dem = 0;
//     for (long long i = 1; i <= sqrt(n); i++)
//         if (n % i == 0)
//             dem = dem + 2;
//     long long k = sqrt(n);
//     if (k * k == n)
//         dem--;
//     return dem;
// }
// int main()
// {
//     prime();
//     cin >> n;
//     for (long long i = 1; i <= sqrt(n); i++)
//     {
//         if (f[i] == true and n % i == 0)
//             d = d + 2;
//         else
//             (f[i] == true and i * i == n)
//             {
//                 d = d - 1;
//             }
//     }

//     cout << d << endl;
// }
#include <bits/stdc++.h>

using namespace std;

long long countPrimeDivisors(long long n)
{
    long long count = 0;
    while (n % 2 == 0)
    {
        count++;
        n /= 2;
    }
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
    }
    if (n > 2)
    {
        count++;
    }
    return count;
}

int main()
{
    long long n;
    cin >> n;
    cout << countPrimeDivisors(n);
    return 0;
}
