//Solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,ch,find;
    while(cin>>str>>ch>>find)
    {
        map<char,char>mp;
        for(int i=0; i<str.size(); i++)
        {
            mp[str[i]]=ch[i];
        }
        string temp="";
        for(int i=0; i<find.size(); i++)
        {
            if(find[i]>='A' && find[i]<='Z')
            {
                char t=find[i]+32;
                temp+=mp[t]-32;
            }
            else if(find[i]>='a' && find[i]<='z')
            {
                temp+=mp[find[i]];
            }
            else
            {
                temp+=find[i];
            }
        }
        cout<<temp<<'\n';
        temp.clear();
    }
}
