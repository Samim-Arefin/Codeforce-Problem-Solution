#include<bits/stdc++.h>
using namespace std;
int main()
{
	int level,p;
	while (cin >> level>>p)
	{
		vector<int> v1;
		for (int i = 0; i < p; i++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		int q;
		cin >> q;
		for (int i = p; i < (p+q); i++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		sort(v1.begin(), v1.end());
		int count = 0;
		for (int i = 0; i < v1.size()-1 && v1.size()>0; i++)
		{
			if (v1[i] != v1[i + 1])
			{
				count++;
			}
		}
		if (p == 0 && q == 0)
		{
			cout << "Oh, my keyboard!\n";
		}
		else if (count+1 == level)
		{
			cout << "I become the guy.\n";
		}
		else
		{
			cout << "Oh, my keyboard!\n";
		}
	}
}