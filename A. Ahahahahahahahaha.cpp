//Solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        int onecount=0,zerocount=0;
        while(num--)
        {
            int temp;
            cin>>temp;
            if(temp==1)
            {
                onecount++;
            }
            else
            {
                zerocount++;
            }
        }
       if(zerocount>=onecount)
       {
           cout<<zerocount<<'\n';
           for(int i=0;i<zerocount;i++)
           {
               cout<<"0";
               if(i+1<zerocount)
               {
                   cout<<" ";
               }
           }
           cout<<'\n';
       }
       else
       {
           if(onecount%2==1)
           {
               onecount--;
           }
           cout<<onecount<<'\n';
           for(int i=0;i<onecount;i++)
           {
               cout<<"0";
               if(i+1<onecount)
               {
                   cout<<" ";
               }
           }
           cout<<'\n';
       }
    }
}
