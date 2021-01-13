#include<bits/stdc++.h>
using namespace std;
bool vowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'y' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
		string str;
		while (cin >> str)
		{
			for (int i = 0; i < str.size(); i++)
			{
				if (vowel(str[i]) == true)
				{
					continue;
				}
				else
				{
					if (str[i] >= 'A' && str[i] <= 'Z')
					{
						char ch = str[i] + 32;
						cout << "." << ch;
					}
					else
					{
						char ch = str[i];
						cout << "." << ch;
					}
				}
			}
			cout << endl;
		}
}