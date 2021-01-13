#include<bits/stdc++.h>
#define Max 1000000005
using namespace std;
int main()
{
	int size, value;
	while (cin >> size >> value)
	{
		vector<int> v1;
		while (size--)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		sort(v1.begin(), v1.end());
		int count = 0;
		for (int i = 0; i < v1.size() - 1; i++)
		{
			for (int j = i + 1; j < v1.size(); j++)
			{
				if (abs(v1[i] - v1[j]) <= value)
				{
					count += 2;
				}
			}
		}
		cout << count << '\n';
	}
}
