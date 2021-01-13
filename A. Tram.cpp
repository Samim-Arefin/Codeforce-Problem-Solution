#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,sum=0,max=0;
	cin >> t;
	while (t--)
	{
		int sub, add;
		cin >> sub >> add;
		sum += add - sub;
		if (sum > max)
		{
			max = sum;
		}
	}
	cout << max << endl;
}