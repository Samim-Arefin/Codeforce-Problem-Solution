#include<bits/stdc++.h>
int main()
{
    std::map<int,std::string>mp;
    mp[1]="a";
    mp[2]="ab";
    mp[3]="abc";
    mp[0]="abcd";
    int num;
    while(std::cin>>num)
    {
        std::string str;
        int count=num/4,digit=num%4;
        for(int i=0;i<count;i++)
        {
            str+=mp[0];
        }
        if(digit!=0)
        {
            str+=mp[digit];
        }
        std::cout<<str<<'\n';
    }
}

