#include <bits/stdc++.h>
using namespace std;

int findMinButtonPress(vector<int> &A, vector<int> &B)
{
    int N = A.size();
    int maxMultiple = 0;    // Lưu số nhân lớn nhất trong dãy B
    int minButtonPress = 0; // Số lần nhấn ít nhất

    for (int i = 0; i < N; i++)
    {
        // Tìm số nhân lớn nhất trong dãy B
        if (B[i] > maxMultiple)
        {
            maxMultiple = B[i];
        }

        // Kiểm tra nếu phần tử A[i] không phải là bội của maxMultiple
        if (A[i] % maxMultiple != 0)
        {
            int pressCount = maxMultiple - (A[i] % maxMultiple); // Số lần nhấn cần để A[i] là bội của maxMultiple
            minButtonPress += pressCount;
            A[i] += pressCount; // Tăng giá trị A[i] lên để nó là bội của maxMultiple
        }
    }

    return minButtonPress;
}

int main()
{
    int N;
    cout << "Nhap so luong phan tu trong day: ";
    cin >> N;

    vector<int> A(N);
    cout << "Nhap cac phan tu cua day A: ";
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<int> B(N);
    cout << "Nhap cac phan tu cua day B: ";
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    int minButtonPress = findMinButtonPress(A, B);
    cout << "So lan nhan nut it nhat la: " << minButtonPress << std::endl;

    return 0;
}
