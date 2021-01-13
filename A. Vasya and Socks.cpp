#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += 1;
			if (sum % m == 0)
			{
				sum += 1;
			}
		}
		cout << sum << '\n';
	}
}