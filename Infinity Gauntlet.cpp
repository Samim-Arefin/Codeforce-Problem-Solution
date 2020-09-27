#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum = 6, num;
	while (cin >> num)
	{
		map<string, string>mp;
		mp["purple"] = "Power";
		mp["green"] = "Time";
		mp["blue"] = "Space";
		mp["orange"] = "Soul";
		mp["red"] = "Reality";
		mp["yellow"] = "Mind";
		int temp = num;
		string str;
		while (temp--)
		{
			cin >> str;
			mp.erase(str);
		}
		cout << abs(sum - num) << endl;
		map<string, string>::iterator it;
		for (it = mp.begin(); it != mp.end(); it++)
		{
			cout << it->second << endl;
		}
		mp.clear();
	}
}