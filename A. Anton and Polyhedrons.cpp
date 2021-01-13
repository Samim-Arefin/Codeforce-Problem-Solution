#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	while (cin >> size)
	{
		string str;
		int count = 0;
		while (size--)
		{
			cin >> str;
			if (str == "Tetrahedron")
			{
				count += 4;
			}
			else if (str == "Cube")
			{
				count += 6;
			}
			else if (str == "Octahedron")
			{
				count += 8;
			}
			else if (str == "Dodecahedron")
			{
				count += 12;
			}
			else if (str == "Icosahedron")
			{
				count += 20;
			}
		}
		cout << count << '\n';
	}
}