#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		int c = 0, s = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				s++;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				c++;
			}
		}
		if (s >= c)
		{
			transform(str.begin(), str.end(), str.begin(), ::tolower);
			cout << str << '\n';
		}
		else
		{
			transform(str.begin(), str.end(), str.begin(), ::toupper);
			cout << str << '\n';
		}
	}
}