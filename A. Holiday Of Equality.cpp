#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	while (cin >> size)
	{
		vector<int> v1;
		int max = 0,sum=0;
		while (size--)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		sort(v1.begin(), v1.end());
		max = v1[v1.size() - 1];
		for (int i = 0; i < v1.size() - 1;i++)
		{
			sum += max - v1[i];
		}
		cout << sum << '\n';
	}
}
