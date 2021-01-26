
#include<bits/stdc++.h>
int main()
{
   int test;
   std::cin>>test;
   while(test--)
    {
       int size;
       std::cin>>size;
       std::string str;
       while(size--)
        {
          char ch;
          std::cin>>ch;
          str.push_back(ch);
        }
       int sum=0,count=0;
       bool check=false;
       for(int i=0;i<str.size();i++)
        {
           if(str[i]=='1')
            {
               check=true;
                sum+=count;
                count=0;
            }
            else if(check==true)
            {
              count++;
            }
        }
       std::cout<<sum<<'\n';
    }
}
