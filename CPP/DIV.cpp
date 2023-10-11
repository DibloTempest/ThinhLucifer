
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int s(int arr[], int n) {
    int d = arr[0];
    for (int i = 1; i < n; i++) {
        d = gcd(d, arr[i]);
    }
    return d;
}

int main() {
	freopen("DIV.inp","r",stdin);
	freopen("DIV.out","w",stdout);
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cout << s(arr, n);

    return 0;
}