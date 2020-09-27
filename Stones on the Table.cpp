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
		int count = 0;
		for (int i = 0; i <size - 1; i++)
		{
			for (int j = i; j <= i; j++)
			{
				if (str[j] == str[j + 1])
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
}