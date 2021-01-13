#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long num;
	while (cin >> num)
	{
		int count = 0;
		while (num > 0)
		{
			int digit = num % 10;
			if (digit == 7 || digit == 4)
			{
				count++;
			}
			num /= 10;
		}
		if (count == 7 || count == 4)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}