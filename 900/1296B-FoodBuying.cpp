#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		int money;
		cin >> money;
		int toSpend = money + (money - 1) / 9;
		cout << toSpend << '\n';
	}
	return 0;
}