//Solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    while(cin>>size)
    {
        long long sum=0;
        vector<int> v1,v2;
        for(int i=0;i<size;i++)
        {
            int temp;
            cin>>temp;
            v1.push_back(temp);
            sum+=temp;
        }
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]*size==sum)
            {
                v2.push_back(i+1);
            }
        }
        if(v2.size()>0)
        {
            cout<<v2.size()<<'\n';
            for(int i=0;i<v2.size();i++)
            {
                cout<<v2[i];
                if(i+1<v2.size())
                {
                    cout<<" ";
                }
            }
            cout<<'\n';
        }
        else
        {
            cout<<"0\n";
        }
        v1.clear(),v2.clear();
    }
}
