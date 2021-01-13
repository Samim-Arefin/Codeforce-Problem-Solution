#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		vector<int> v1;
		for (int i = 0; i < size; i++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		sort(v1.begin(), v1.end());
		int min = 1e5;
		for (int i = 0; i < size - 1; i++)
		{
			if ((v1[i + 1] - v1[i]) < min)
			{
				min = (v1[i + 1] - v1[i]);
			}
		}
		cout << min << '\n';
	}
}
