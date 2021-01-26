
#include<bits/stdc++.h>
int main()
{
    int test;
    std::cin>>test;
    while(test--)
    {
        std::string str;
        int size;
        std::cin>>size;
        while(size--)
        {
            char ch;
            std::cin>>ch;
            str.push_back(ch);
        }
        int zero_count=0,one_count=0;
        for(int i=0;i<str.size()-1;i++)
        {
            if(str[i]=='1' && str[i+1]=='1')
            {
                one_count++;
            }
            else if(str[i]=='0' && str[i+1]=='0')
            {
                zero_count++;
            }
        }
        if(zero_count>=one_count)
        {
            std::cout<<zero_count<<'\n';
        }
        else
        {
            std::cout<<one_count<<'\n';
        }
    }
}
