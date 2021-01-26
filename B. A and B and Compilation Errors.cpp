#include<bits/stdc++.h>
int main()
{
    int size;
    while(std::cin>>size)
    {
        std::vector<int>v1,v2;
        std::map<int,int>mp1,mp2,mp3;
        for(int i=0;i<size;i++)
        {
            int temp;
            std::cin>>temp;
            if(mp1[temp]==0)
            {
                v1.push_back(temp);
            }
            mp1[temp]++;
        }
        for(int i=0;i<size-1;i++)
        {
            int temp;
            std::cin>>temp;
            if(mp2[temp]==0)
            {
                v2.push_back(temp);
            }
            mp2[temp]++;
        }
        for(int i=0;i<size-2;i++)
        {
            int temp;
            std::cin>>temp;
            mp3[temp]++;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++)
        {
            if(mp1[v1[i]]!=mp2[v1[i]])
            {
                std::cout<<v1[i]<<'\n';
                break;
            }
        }
        for(int i=0;i<v2.size();i++)
        {
            if(mp2[v2[i]]!=mp3[v2[i]])
            {
                std::cout<<v2[i]<<'\n';
                break;
            }
        }
    }
}
