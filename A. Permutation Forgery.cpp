#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        vector<int>v1;
        while(size--)
        {
            int temp;
            cin>>temp;
            v1.push_back(temp);
        }
        for(int i=v1.size()-1,j=0;i>=0;i--,j)
        {
            cout<<v1[i];
            if(j+1<v1.size())
            {

                cout<<" ";
            }
        }
        cout<<'\n';
        v1.clear();
    }
}
 
