#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    while(cin>>num)
    {
        int flag=0;
        if(num%2==0 && num!=2)
        {
            int diff=2;
            while(num>0)
            {
                num-=diff;
                if(num%2==0 && diff%2==0)
                {
                    flag=1;
                    break;
                }
                else
                {
                    flag=0;
                }
                diff+=diff;
            }
            if(flag==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

