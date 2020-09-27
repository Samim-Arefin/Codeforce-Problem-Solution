//Solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,k;
    while(cin>>size>>k)
    {
        map<char,int>mp;
        vector<char> v1;
        while(size--)
        {
            char ch;
            cin>>ch;
            if(mp[ch]==0)
            {
                v1.push_back(ch);
            }
            mp[ch]++;
        }
        if(k==v1.size())
        {
            int minimum=100000;
            for(int i=0;i<v1.size();i++)
            {
                minimum= min(minimum,mp[v1[i]]);
            }
            cout<<minimum*k<<'\n';
        }
        else
        {
            cout<<"0\n";
        }
        mp.clear();
        v1.clear();
    }
}
