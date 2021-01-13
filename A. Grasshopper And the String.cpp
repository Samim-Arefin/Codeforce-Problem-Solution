#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		int count = 1,maximum=0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y')
			{
				maximum = max(maximum, count);
				count = 1;
			}
			else
			{
				count++;
			}
		}
		maximum = max(maximum, count);
		cout << maximum << '\n';
	
	}
}