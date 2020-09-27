#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int num;
		cin >> num;
		map<int, int> mp;
		vector<int> v1;
		for (int i = 0; i < num; i++)
		{
			int temp;
			cin >> temp;
			if (mp[temp] == 0)
			{
				v1.push_back(temp);
			}
			mp[temp]++;
		}
		sort(v1.begin(), v1.end());
		int size = v1.size();
		if (size == 1)
		{
			if (size == 1)
			{
				cout<<"YES\n";
			}
		}
		else
		{
			int flag = 0;
			for (int i = 0; i < (size-1); i++)
			{
				int temp = abs(v1[i] - v1[i + 1]);
				if (temp > 1)
				{
					flag = 1;
					break;
				}
			}
			if (flag == 1)
			{
				cout << "NO\n";
			}
			else
			{
				cout << "YES\n";
			}
		}
		v1.clear();
		mp.clear();
	}
}