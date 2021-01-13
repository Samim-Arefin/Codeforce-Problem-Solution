#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k, num;
	while (cin >> k >> num)
	{
		vector<int> v1;
		for (int i = 0; i < num; i++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		sort(v1.begin(), v1.end());
		int size = num - k + 1;
		int minimum = 1e5;
		for (int i = 0, j = k - 1; i < size; i++, j++)
		{
			int diff = v1[j] - v1[i];
			minimum = min(minimum, diff);
		}
		cout << minimum << '\n';
		v1.clear();
	}
}