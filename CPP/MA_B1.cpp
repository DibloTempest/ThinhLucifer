#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int countPrimeFactors(int n)
{
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            int p = i;
            while (n % p == 0)
            {
                count++;
                p *= i;
            }
        }
    }
    return count;
}

// Hàm main để kiểm tra
int main()
{
    int n;
    cout << "Nhap vao so n: ";
    cin >> n;
    cout << "So luong thua so nguyen to cua " << n << " la: " << countPrimeFactors(n) << endl;
    return 0;
}
