#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        if(str[0]>='a' && str[0]<='z')
        {
            str[0]=str[0]-32;
        }
        cout<<str<<endl;
        str.clear();
    }
}
