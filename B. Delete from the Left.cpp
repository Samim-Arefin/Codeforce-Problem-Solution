#include<bits/stdc++.h>
int main()
{
    std::string str,ch;
    while(std::cin>>str>>ch)
    {
       if(str==ch)
       {
           std::cout<<"0\n";
       }
       else
       {
           if(ch.size()>str.size())
           {
               swap(str,ch);
           }
           reverse(str.begin(),str.end());
           reverse(ch.begin(),ch.end());
           int count=0;
           for(int i=0;i<ch.size();i++)
           {
               if(str[i]==ch[i])
               {
                   count++;
               }
               else
               {
                   break;
               }
           }
           std::cout<<((str.size()-count)+(ch.size()-count))<<'\n';
       }
    }
}
