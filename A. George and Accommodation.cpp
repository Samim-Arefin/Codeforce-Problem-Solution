#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	while (cin >> t)
	{
		int count = 0;
		for (int i = 0; i < t; i++)
		{
			int p, q;
			cin >> p >> q;
			int diff = q - p;
			if (diff>=2)
			{
				count++;
			}
		}
		cout << count << endl;
	}
}