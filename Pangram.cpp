#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		string str;
		map<char, int> mp;
		for (int i = 0; i < num; i++)
		{
			char ch;
			cin >> ch;
			if (ch >= 'A' && ch <= 'Z')
			{
				ch = ch + 32;
				if (mp[ch] == 0)
				{
					str.push_back(ch);
				}
				mp[ch]++;
			}
			else
			{
				if (mp[ch] == 0)
				{
					str.push_back(ch);
				}
				mp[ch]++;
			}
		}
		int size = str.size();
		if (size == 26)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}