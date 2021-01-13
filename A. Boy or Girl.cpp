#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    map<char,int> mp;
    int count;
    while(cin>>str)
    {
        count=0;
        for(int i=0;i<str.size();i++)
        {
            if(mp[str[i]]==0)
            {
                count++;
            }
            mp[str[i]]++;
        }
        if(count%2==0)
        {
            cout<<"CHAT WITH HER!"<<endl;
        }
        else
        {
            cout<<"IGNORE HIM!"<<endl;
        }
    }
}
