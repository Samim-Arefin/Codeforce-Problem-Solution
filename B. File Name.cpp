#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	while (cin >> size)
	{
		string str;
		for (int i = 0; i < size; i++)
		{
			char ch;
			cin >> ch;
			str.push_back(ch);
		}
		int count = 0,min=0;
		for (int i = 0; i < str.size() - 1; i++)
		{
			if (str[i] == 'x' && str[i + 1] == 'x')
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count >= 2)
			{
				min++;
			}
		}
		cout << min << '\n';
	}
}
