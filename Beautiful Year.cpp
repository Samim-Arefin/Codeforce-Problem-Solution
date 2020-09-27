#include<bits/stdc++.h>
using namespace std;
int main()
{
	int start;
	while (cin >> start)
	{
		int min=0;
		for (int i = start+1; i <= 10000; i++)
		{
			int temp = i;
			map<int, int>mp;
			int count = 0;
			while (temp > 0)
			{
				int digit = temp % 10;
				if (mp[digit] == 0)
				{
					count++;
				}
				mp[digit]++;
				temp /= 10;
			}
			if (count == 4)
			{
				min = i;
				break;
			}
		}
		cout << min << "\n";
	}
}