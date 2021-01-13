#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		vector<int> v1;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '1' || str[i] == '2' || str[i] == '3')
			{
				int num = str[i] - '0';
				v1.push_back(num);
			}
		}
		sort(v1.begin(), v1.end());
		int size = v1.size();
		for (int i = 0; i < size; i++)
		{
			cout << v1[i];
			if (i + 1 < size)
			{
				cout << "+";
			}
		}
		cout << "\n";
	}
}