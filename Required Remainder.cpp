#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long x, y, n;
		cin >> x >> y >> n;
		if (x < y)
		{
			cout << n << '\n';
		}
		else
		{
			int num = (int)(n / x);
			int max = 0;
			for (int i = num; i >= 0; i--)
			{
				int cal = (i * x) + y;
				if ((cal <= n))
				{
					max = cal;
					break;
				}
			}
			cout << max << '\n';
		}
	}
}