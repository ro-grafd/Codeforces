#include <bits/stdc++.h>
using namespace std;
bool func ( int x)
{
    return x >= 0 && x % 33 == 0;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int query;
        cin>>query;
        if(func(query))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}