#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str, ch, both;
	while (cin >> str >> ch >> both)
	{
		map<char, int>mp1, mp2;
		vector<char> v1, v2;
		for (int i = 0; i < str.size(); i++)
		{
			if (mp1[str[i]] == 0)
			{
				v1.push_back(str[i]);
			}
			mp1[str[i]]++;
		}
		for (int i = 0; i < ch.size(); i++)
		{

			if (mp1[ch[i]] == 0)
			{
				v1.push_back(ch[i]);
			}
			mp1[ch[i]]++;
		}
		for (int i = 0; i < both.size(); i++)
		{
			if (mp2[both[i]] == 0)
			{
				v2.push_back(both[i]);
			}
			mp2[both[i]]++;
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		if (v1.size() == v2.size())
		{
			int flag = 0;
			for (int i = 0; i < v1.size(); i++)
			{
				if (mp1[v1[i]] != mp2[v2[i]])
				{
					flag = 1;
					break;
			   }
			}
			if (flag)
			{
				cout << "NO\n";
			}
			else
			{
				cout << "YES\n";
			}
		}
		else
		{
			cout << "NO\n";
		}
	}
}