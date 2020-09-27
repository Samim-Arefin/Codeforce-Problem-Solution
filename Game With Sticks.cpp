#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		if (a == 1 || b==1)
		{
		    cout << "Akshat\n";
		}
		else
		{
			int sum = a * b;
			if (sum % 2 == 0)
			{
				cout << "Malvika\n";
			}
			else
			{
				cout << "Akshat\n";
			}
		}
	}
}