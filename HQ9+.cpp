#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		int flag = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == 'H')
			{
				flag = 1;
				break;
			}
			else if (str[i] == 'Q')
			{
				flag = 1;
				break;
			}
			else if (str[i] == '9')
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
		str.clear();
	}
}