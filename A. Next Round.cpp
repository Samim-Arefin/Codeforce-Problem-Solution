#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    int num,sum,count;
    while(cin>>num>>sum)
    {
        count=0;
        for(int i=0; i<num; i++)
        {
            int temp;
            cin>>temp;
            v1.push_back(temp);
        }
        for(int i=0; i<num; i++)
        {
            if(v1[i]>=v1[sum-1] && v1[i]>0)
            {
                count++;
            }
        }
        cout<<count<<endl;
        v1.clear();
    }
}
