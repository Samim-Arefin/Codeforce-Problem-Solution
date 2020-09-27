#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long num, key;
	while (cin >> num >> key)
	{
		if (num % 2 == 0)
		{
			long long mid = num / 2;
			if (key <= mid)
			{
				cout << (2 * key - 1) << '\n';
			}
			else
			{
				cout << (2 * key - 2 * mid) << '\n';
			}
		}
		else
		{
			long long mid = (num / 2) + 1;
			if (key <= mid)
			{
				cout << (2 * key - 1) << '\n';
			}
			else
			{
				cout << (2 * key - 2 * mid) << '\n';
			}
		}
	}

}