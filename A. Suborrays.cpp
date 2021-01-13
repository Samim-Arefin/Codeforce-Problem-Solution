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
        vector<int> v1;
        for(int i=num; i>0; i--)
        {
            v1.push_back(i);
        }
        for(int i=0; i<v1.size(); i++)
        {
            cout<<v1[i];
            if(i+1<v1.size())
            {
                cout<<" ";
            }
        }
        cout<<'\n';
        v1.clear();
    }
}
