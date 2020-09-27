#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, h;
	while (cin >> n >> h)
	{
		int count = 0;
		while (n--)
		{
			int num;
			cin >> num;
			if (num > h)
			{
				count += 2;
			}
			else
			{
				count++;
			}
		}
		cout << count << '\n';
	}
}