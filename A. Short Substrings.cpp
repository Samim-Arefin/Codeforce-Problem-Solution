#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		    string str;
		    cin >> str;
			string temp;
			temp += str[0];
			temp += str[1];
			for (int i=3;i<str.size();i+=2)
			{
				temp += str[i];
			}
			cout << temp << '\n';
	}
}