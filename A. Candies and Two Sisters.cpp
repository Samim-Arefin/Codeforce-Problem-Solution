#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long num;
		cin >> num;
		if (num == 1)
		{
			cout << "0\n";
		}
		else if (num == 2)
		{
			cout << "0\n";
		}
		else
		{
			if (num % 2 == 0)
			{
				cout << (num / 2) - 1 << "\n";
			}
			else
			{
				cout << (num / 2 )<< '\n';
			}
		}
	}
}