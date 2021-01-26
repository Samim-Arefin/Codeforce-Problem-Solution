#include<bits/stdc++.h>
int main()
{
	std::string str;
	while (std::cin >> str)
	{
		std::vector<char> v1{'h','e','l','l','o'};
	    std::string ch;
		for (int i = 0,j=0; i < str.size(); i++)
		{
			if(str[i]==v1[j])
			{
				ch+=str[i];
				j++;
			}
		}
	    if(ch=="hello")
	    {
	    	std::cout<<"YES\n";
	    }
	    else
	    {
	    	std::cout<<"NO\n";
	    }
	}
}
