#include<bits/stdc++.h>
int main()
{
    int test;
    std::cin>>test;
    while(test--)
    {
        std::vector<int>v1;
        int size;
        std::cin>>size;
        while(size--)
        {
            int temp;
            std::cin>>temp;
            v1.push_back(temp);
        }
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        {
            std::cout<<v1[i];
            if(i+1<v1.size())
            {
                std::cout<<" ";
            }
        }
        std::cout<<'\n';
    }
}
