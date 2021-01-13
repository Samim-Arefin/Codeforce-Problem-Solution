#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		int temp = num;
		int count = 0,digit_count=0;
		while (temp > 0)
		{
			int digit = temp % 10;
			if (digit == 4 || digit == 7)
			{
				digit_count++;
			}
			temp /= 10;
			count++;
		}
		if (count == digit_count)
		{
			cout << "YES" << endl;
		}
		else
		{
			vector<int> v1 = { 4,7,47,74,477,747,774 };
			int flag = 0;
			for (int i = 0; i < v1.size(); i++)
			{
				if (num % v1[i] == 0)
				{
					flag = 1;
					break;
				}
			}
			if (flag==1)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
}