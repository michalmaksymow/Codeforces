#include <bits/stdc++.h>

using namespace std;

int main()
{
	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	cout << min({d1+d2+d3, 2*d1+2*d2, 2*d2+2*d3, 2*d1+2*d3}) << '\n';
	return 0;
}