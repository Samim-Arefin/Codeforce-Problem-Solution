#include<bits/stdc++.h>
int main()
{
    int test;
    std::cin>>test;
    while(test--)
    {
        int num,sum=0,count=0;
        std::cin>>num;
        sum+=(((num%10)-1)*10);
        while(num!=0)
        {
            num/=10;
            count++;
        }
        sum+=((count*(count+1))/2);
        std::cout<<sum<<'\n';
    }
}

