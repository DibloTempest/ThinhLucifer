#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int lastPositive = 0;
    int currentNumber;
    bool foundNegativeNumber = false;

    for (int i = 0; i < n; i++)
    {
        cin >> currentNumber;
        if (currentNumber < 0)
        {
            foundNegativeNumber = true;
        }
        if (currentNumber > 0)
        {
            lastPositive = currentNumber;
        }
        if (foundNegativeNumber)
        {
            break;
        }
    }

    if (foundNegativeNumber)
    {
        cout << lastPositive << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
