#include<bits/stdc++.h>
using namespace std;
int main()
{
	   int t;
	while (cin >> t)
	{
		int a = 0, d = 0;
		for (int i = 0; i < t; i++)
		{
			char ch;
			cin >> ch;
			if (ch == 'A')
			{
				a++;
			}
			else if (ch == 'D')
			{
				d++;
			}
		}
		if (a > d)
		{
			cout << "Anton\n";
		}
		else if (a < d)
		{
			cout << "Danik\n";
		}
		else if (a == d)
		{
			cout << "Friendship\n";
		}
	}
}