#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    string str;
    while(cin>>str)
    {    count=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==str[i+1])
            {
                count++;
                if(count==6)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            else
            {
                count=0;
            }
        }
        if(count!=6)
        {
            cout<<"NO"<<endl;
        }
        str.clear();
    }
}

