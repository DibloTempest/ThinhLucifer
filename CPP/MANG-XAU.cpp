#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    char *dong[100];
    int i, n, j;
    cout << " nhap so ten : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        dong[i] = new char[100];
        cout << " nhap ten lan luot la  " << i + 1 << " : ";
        fflush(stdin);
        cin.getline(dong[i], 100);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if ((strcmp(dong[i], dong[j])) > 0)
            {
                swap(dong[i], dong[j]);
            }
        }
    }
    cout << " sau khi sap xep ten la : \n";
    for (i = 0; i <= n; i++)
    {
        cout << dong[i] << endl;
    }
    system("pause");
    return 0;
}