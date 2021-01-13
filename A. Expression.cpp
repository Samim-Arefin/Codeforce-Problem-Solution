#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		int s1, s2, s3, s4,s5;
		s1 = s2 = s3 = s4= s5 = 0;
		s1 = a + b * c;
		s2 = a * (b + c);
		s3 = a * b * c;
		s4 = (a + b) * c;
		s5 = a + b + c;
		vector<int> v1 = { s1,s2,s3,s4,s5 };
		cout << *max_element(v1.begin(), v1.end()) << '\n';
		v1.clear();
	}
}