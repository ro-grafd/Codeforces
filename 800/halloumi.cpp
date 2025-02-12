#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>& nums, int k)
{
    if(k<=1)
    {
        for(int i = 0 ;i+1 < nums.size(); i++)
        {
            if(nums[i] > nums[i+1])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        vector<int>input(n);
        for(int i=0;i<n;i++) cin>>input[i];
        if(ispossible(input,k))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}