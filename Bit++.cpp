#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,count = 0;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		if (str == "++X" || str=="X++")
		{
			count++;
		}
		else if (str == "--X" || str == "X--")
		{
			count--;
		}
	}
	cout << count << endl;
}