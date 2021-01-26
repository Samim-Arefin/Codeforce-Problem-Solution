#include<bits/stdc++.h>
int main()
{
    int test;
    std::cin>>test;
    while(test--)
    {
        int num;
        std::cin>>num;
        std::string str;
        while(num--)
        {
            char ch;
            std::cin>>ch;
            str.push_back(ch);
        }
        if(str.size()>=4)
        {
            if(str[0]=='2' && str[1]=='0' && str[str.size()-2]=='2' && str[str.size()-1]=='0')
            {
                std::cout<<"YES\n";
            }
            else if(str[0]=='2' && str[1]=='0' && str[2]=='2' && str[str.size()-1]=='0')
            {
                std::cout<<"YES\n";
            }
            else if(str[0]=='2' && str[1]=='0' && str[2]=='2' && str[3]=='0')
            {
                std::cout<<"YES\n";
            }
            else if(str[0]=='2' && str[str.size()-3]=='0' && str[str.size()-2]=='2' && str[str.size()-1]=='0')
            {
                std::cout<<"YES\n";
            }
            else if(str[str.size()-4]=='2' && str[str.size()-3]=='0' && str[str.size()-2]=='2' && str[str.size()-1]=='0')
            {
                std::cout<<"YES\n";
            }
            else
            {
                std::cout<<"NO\n";
            }
        }
        else
        {
           std::cout<<"NO\n";
        }

    }
}

