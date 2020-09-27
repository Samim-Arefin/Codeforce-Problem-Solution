#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		int flag = 0;
		while (num--) 
		{
			int temp;
			cin >> temp;
			if (temp == 1)
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			cout << "HARD\n";
		}
		else
		{
			cout << "EASY\n";
		}
	}
}