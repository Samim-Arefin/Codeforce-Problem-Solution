#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, ans = 0;
		cin >> a >> b;
		if (a % b == 0)
		{
			cout << ans << '\n';
		}
		else
		{
			a = a % b;
			ans=b- a;
			cout << ans << '\n';
		}
	}
}