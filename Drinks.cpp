#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	while (cin >> size)
	{
		double sum = 0.0;
		for (int i = 0; i < size; i++)
		{
			double temp;
			cin >> temp;
			sum += temp;
		}
		double solve=sum/size;
		cout<<fixed<<setprecision(12) << solve << '\n';
	}
}