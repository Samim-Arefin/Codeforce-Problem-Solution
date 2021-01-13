#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
			for (int i = 1; i <= num; i++)
			{
				if (i % 2 == 1)
				{
					cout << "I hate ";
				}
				if(i%2==0)
				{
					cout << "I love ";
				}
				if (i  < num)
				{
					cout << "that ";
				}
			}
			cout << "it\n";
	}
}