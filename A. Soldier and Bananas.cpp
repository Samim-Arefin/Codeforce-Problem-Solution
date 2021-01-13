#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k, w;
	long long n, sum;
	while (cin >> k >> n >> w)
	{
		sum = 0;
		for (int i = 1; i <= w; i++)
		{
			sum += (k + (i - 1) * k);
		}
		int diff = n-sum;
		if (diff>=0)
		{
			cout << "0" << endl;
		}
		else
		{
			cout << abs(diff) << endl;
		}
	}
}
