#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		int size = str.size();
		if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
		{
			int s = 0, c = 0;
			if (str[0] >= 'a' && str[0] <= 'z')
			{
				s++;
			}
			if (str[0] >= 'A' && str[0] <= 'Z')
			{
				c++;
			}
			if (s == 1)
			{
				int rem = 0;
				for (int i = 1; i < str.size(); i++)
				{
					if (str[i] >= 'A' && str[i] <= 'Z')
					{
						rem++;
					}
				}
				if (str.size() - 1 == rem)
				{
					string temp = "";
					temp += str[0] - 32;
					for (int i = 1; i < str.size(); i++)
					{
						temp += str[i] + 32;
					}
					cout << temp << '\n';
				}
				else
				{
					cout << str << '\n';
				}
			}
			else if (c == 1)
			{

				int s1 = 0,s2=0;
				for (int i = 1; i < str.size(); i++)
				{
					if (str[i] >= 'a' && str[i] <= 'z')
					{
						s1++;
					}
				}
				for (int i = 1; i < str.size(); i++)
				{
					if (str[i] >= 'A' && str[i] <= 'Z')
					{
						s2++;
					}
				}
				if (str.size() - 1 == s1)
				{
					if (str.size() == 1)
					{
						string temp = "";
						temp += str[0] + 32;
						cout << temp << '\n';
					}
					else
					{
						cout << str << '\n';
					}
				}
				else if (str.size() - 1 == s2)
				{

					string temp = "";
					for (int i = 0; i < str.size(); i++)
					{
						temp += str[i] + 32;
					}
					cout << temp << '\n';
				}
				else
				{
					cout << str << '\n';
				}
			}
		}
	}
}