#include<bits/stdc++.h>
int main()
{
    int size;
    while(std::cin>>size)
    {
        std::string str;
        while(size--)
        {
            char ch;
            std::cin>>ch;
            str.push_back(ch);
        }
        if(str.size()%2==1)
        {
            std::string ans;
            for(int i=str.size()-2;i>=1;i-=2)
            {
                ans+=str[i];
            }
            for(int i=0;i<str.size();i+=2)
            {
                ans+=str[i];
            }
            std::cout<<ans<<'\n';
        }
        else
        {
            std::string ans;
            for(int i=str.size()-2;i>=0;i-=2)
            {
                ans+=str[i];
            }
            for(int i=1;i<str.size();i+=2)
            {
                ans+=str[i];
            }
            std::cout<<ans<<'\n';
        }
    }
}
