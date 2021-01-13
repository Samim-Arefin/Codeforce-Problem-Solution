//Solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    while(cin>>size)
    {
        int zcount=0,ncount=0;
        while(size--)
        {
            char ch;
            cin>>ch;
            if(ch=='z')
            {
                zcount++;
            }
            else if(ch=='n')
            {
                ncount++;
            }
        }
        for(int i=0;i<ncount+zcount;i++)
        {
            if(i<ncount)
            {
                cout<<"1";
            }
            else if(i-ncount<zcount)
            {
                cout<<"0";
            }
            if(i+1<ncount+zcount)
            {
                cout<<" ";
            }
        }
       cout<<'\n';
    }
}
