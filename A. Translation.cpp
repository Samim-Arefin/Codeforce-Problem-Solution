#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str, ch;
	while (cin >> str >> ch)
	{
		reverse(str.begin(), str.end());
		if (str == ch)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}