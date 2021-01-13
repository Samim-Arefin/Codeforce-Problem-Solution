#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num,sum;
    while(cin>>num)
    {
        sum=0;
        if(num%2== 0)
        {
            sum=num/2;
        }
        else
        {
            sum=((num+1)/2);
            sum*=(-1);
        }
        cout<<sum<<endl;
    }
}
