#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str, ch;
	while (cin >> str >> ch)
	{
		transform(str.begin(), str.end(), str.begin(),:: tolower);
		transform(ch.begin(), ch.end(), ch.begin(), ::tolower);
		if (str == ch)
		{
			cout << "0" << endl;
		}
		else
		{
			int l1 = str.size();
			int l2 = ch.size();
			for (int i = 0; i < min(l1, l2); i++)
			{
				if (str[i] > ch[i])
				{
					cout << "1" << endl;
					break;
				}
				else if(ch[i]>str[i])
				{
					cout << "-1" << endl;
					break;
				}
			}
		}
	}
}
