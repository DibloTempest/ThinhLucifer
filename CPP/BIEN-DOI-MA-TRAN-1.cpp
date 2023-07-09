#include
long long n, d = 1, a[1004][1004];
int main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            if ((i + j) % 2 == 0)
                cout << d + 1 << " ";
            if ((i + j) % 2 == 1)
                cout << d - 1 << " ";
            d = d + 1;
        }
        cout << endl;
    }
}