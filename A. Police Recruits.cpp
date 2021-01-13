#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    while (cin >> size)
    {
        vector<int> v1;
        for (int i = 0; i < size; i++)
        {
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }
        int count = 0,store=0;
        for (int i = 0; i < size; i++)
        {
            if (v1[i] == -1)
            {
                if (store > 0)
                {
                    store--;
                }
                else
                {
                    count++;
                }
            }
            else
            {
                store += v1[i];
            }
        }
        cout << count << '\n';
    }
}
