//Solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=abs((a-b)/10);
        if((abs(a-b)%10)!=0)
        {
            cout<<ans+1<<'\n';
        }
        else
        {
            cout<<ans<<'\n';
        }

    }
}
