#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        string str[n],ch[m];
        for(int i=0; i<n; i++)
        {
            string temp;
            cin>>temp;
            str[i]=temp;
        }
        for(int i=0; i<m; i++)
        {
            string temp;
            cin>>temp;
            ch[i]=temp;
        }
        int size=n*m;
        int i=0,j=0;
        vector<string>v1;
        for(int k=0; k<size; k++)
        {
            if(i==n || j==m)
            {
                if(i==n)
                {
                    i=0;
                }
                if(j==m)
                {
                    j=0;
                }
            }
            string temp=str[i]+ch[j];
            v1.push_back(temp);
            temp.clear();
            i++,j++;
        }
        int q;
        cin>>q;
        while(q--)
        {
            int num;
            cin>>num;
            int value=num%size;
            if(value==0)
            {
                cout<<v1[size-1]<<'\n';
            }
            else
            {
                cout<<v1[value-1]<<'\n';
            }
        }
        v1.clear();
    }
}
