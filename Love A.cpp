//Solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        int a=0,x=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='a')
            {
                a++;
            }
            else
            {
                x++;
            }
        }
        if(a>x)
        {
            cout<<str.size()<<'\n';
        }
        else
        {
            cout<<a+a-1<<'\n';
        }
    }
}
