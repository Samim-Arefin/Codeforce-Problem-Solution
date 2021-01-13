#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		if (str.size() > 10)
		{
			int length = str.size() - 2;
			cout << str[0] << length << str[str.size() - 1] << endl;
		}
		else
		{
			cout << str << endl;
		}
	}
}