#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c;
    while(cin>>a>>b>>c)
    {
        cout<<fixed<<setprecision(0)<<((ceil(a/c))*(ceil(b/c)))<<endl;
    }
}
