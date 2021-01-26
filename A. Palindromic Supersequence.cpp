#include<bits/stdc++.h>
int main()
{
    std::string str;
    while(std::cin>>str)
    {
        std::string ch=str;
        reverse(ch.begin(),ch.end());
        str+=ch;
        std::cout<<str<<'\n';
    }
}

