#include<bits/stdc++.h>
int main()
{
    int test;
    std::cin>>test;
    while(test--)
    {
        int size;
        std::cin>>size;
        if((size/2)%2==0)
        {
            std::cout<<"YES\n";
            for(int i=2,j=1;j<=size/2;i+=2,j++)
            {
                std::cout<<i<<" ";
            }
            for(int i=1,j=1;j<=size/2;i+=2,j++)
            {
                if(j==size/2)
                {
                    std::cout<<i+size/2<<'\n';
                }
                else
                {
                    std::cout<<i<<" ";
                }
            }
        }
        else
        {
           std::cout<<"NO\n";
        }
    }
}


