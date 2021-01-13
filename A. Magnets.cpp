#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		int sum=0,flag=0,flag2=0;
		for (int i = 0; i < num; i++)
		{
			int temp;
			cin >> temp;
			if (temp == 10 && flag==0)
			{
				sum++;
				flag = 1;
				flag2 = 0;
			}
			else if(temp==1 && flag2==0)
			{
				sum++;
				flag2 = 1;
				flag = 0;
			}
		}
		cout << sum << '\n';
	}
}