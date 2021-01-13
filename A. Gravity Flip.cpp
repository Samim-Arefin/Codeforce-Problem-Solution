#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		vector<int> v1;
		for (int i = 0; i < num; i++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		sort(v1.begin(), v1.end());
		int size = v1.size();
		for (int i = 0; i < size; i++)
		{
			cout << v1[i];
			if (i + 1 < size)
			{
				cout << " ";
			}
		}
		cout << '\n';
		v1.clear();
	}
}