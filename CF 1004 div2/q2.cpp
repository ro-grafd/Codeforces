#include<bits/stdc++.h>
using namespace std;

bool exists( vector<int>& nums)
{
    unordered_map<int,int> hash;
    for(int i = 0; i < nums.size(); i++)
    {
        hash[nums[i]]++;
    }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>input(n);
        for(int i = 0; i < n ; i++)
        {
            cin >> input[i];
        }
        if(exists(input))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}