#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		vector<int> v1;
		for (int i = 0; i < size; i++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		if(v1[0]+v1[1]<=v1[size-1])
		{
		    cout<<"1 2 "<<size<<'\n';
		}
		else
		{
			cout << "-1\n";
		}
	}
}
