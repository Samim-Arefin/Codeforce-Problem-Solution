#include<bits/stdc++.h>
int main()
{
    int test;
    std::cin>>test;
    while(test--)
    {
        int size;
        std::cin>>size;
        std::map<int,int>mp;
        int sum=0;
        for(int i=0; i<size; i++)
        {
            int num;
            std::cin>>num;
            sum+=num;
            mp[num]++;
        }
        if(mp.size()==1 &&( mp[1]%2==1 || mp[2]%2==1))
        {
            std::cout<<"NO\n";
        }
        else
        {
            if(sum%2==0)
            {
                std::cout<<"YES\n";
            }
            else
            {
                std::cout<<"NO\n";
            }
        }

    }
}

