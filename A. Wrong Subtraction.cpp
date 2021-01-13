#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num, k;
	while (cin >> num >> k)
	{
		while (k--)
		{
			int digit = num % 10;
			if (digit == 0)
			{
				num /= 10;
			}
			else
			{
			    num--;
			}
		}
		cout << num << endl;
	}
}