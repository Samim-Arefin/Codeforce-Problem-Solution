#include<bits/stdc++.h>
int main()
{
    int test;
    std::cin>>test;
    while(test--)
    {
        std::set<int>s;
        int size;
        std::cin>>size;
        while(size--)
        {
            int num;
            std::cin>>num;
            s.insert(num);
        }
        std::cout<<s.size()<<'\n';
    }
}

