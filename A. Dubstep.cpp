#include<bits/stdc++.h>
int main()
{
    std::string str;
    while(std::cin>>str)
    {
      bool check=false;
      for(int i=0;i<str.size();i++)
      {
          if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
          {
              i+=2;
              if(check==true)
              {
                  std::cout<<" ";
              }
              check=false;
          }
          else
          {
              check=true;
              std::cout<<str[i];
          }
      }
      std::cout<<'\n';
    }
}
