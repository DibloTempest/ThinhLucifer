#include <bits/stdc++.h>
using namespace std;
struct hs
{
	string hoten;
	long long tin;
	long long toan;
};

hs c[100005];
bool cmp(hs a, hs b)
{
	if (a.hoten < b.hoten)
		return true;
	if (a.hoten > b.hoten)
		return false;
	if (a.toan + a.tin < b.toan + b.tin)
		return true;
	if (a.toan + a.tin > b.toan + b.tin)
		return false;
	return (a.toan < b.toan);
}
int main()
{
	long long n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> c[i].hoten;
		cin >> c[i].toan;
		cin >> c[i].tin;
	}
	sort(c + 1, c + n + 1, cmp);
	for (int i = 1; i <= n; i++)
	{
		cout << c[i].hoten << " " << c[i].toan << " " << c[i].tin << endl;
	}
}