#include<bits/stdc++.h>
using namespace std;
string sum(string a, string b)
{
	if (a.size() > b.size())
	{
		swap(a, b);
	}
	string temp;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '1' && b[i] == '1')
		{
			temp.push_back('0');
		}
		else if (a[i] == '0' && b[i] == '0')
		{
			temp.push_back('0');
		}
		else
		{
			temp.push_back('1');
		}
	}
	for (int i = a.size(); i < b.size(); i++)
	{
		temp.push_back(b[i]);
	}
	reverse(temp.begin(), temp.end());
	return temp;
}
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		string str;
		str = sum(a, b);
		cout << str << '\n';
	}
}