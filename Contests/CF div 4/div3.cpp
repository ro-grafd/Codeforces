#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>input(n);
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    for(int i=0;i<n;i++)
    {
        int ans= input[i]-1;
        cout<<ans<<endl;
    }
    return 0;
}