#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		vector<pair<int, int>>v1;
		for (int i = 0; i < num; i++)
		{
			int a, b;
			cin >> a >> b;
			v1.push_back({ a,b });
		}
		int size = v1.size() - 1;
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = i; j < size; j++)
			{
				if ((v1[i].first) == (v1[j+1].second))
				{
					count++;
				}
				if ((v1[i].second) == (v1[j + 1].first))
				{
					count++;
				}
			}
		}
		cout << count << '\n';
	}
}