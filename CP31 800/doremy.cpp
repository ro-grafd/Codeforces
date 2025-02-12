#include<bits/stdc++.h>
using namespace std;
bool canbegood(vector<int>& nums)
{
    unordered_map<int,int>hash;
    for(int i =0;i<nums.size();i++)
    {
        hash[nums[i]]++;
    }
    if(hash.size()==1) return true;
    if(hash.size()>2) return false;
    int count1 = 0;
    int count2 = 0;
    for(auto itr = hash.begin() ; itr!=hash.end();itr++)
    {
        if(count1==0)
        {
            count1=itr->second;
        }else{
            count2= itr->second;
        }
    }
    return (abs(count1-count2) <=1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        vector<int>input(n);
        for(int i=0;i<n;i++) cin>>input[i];
        if(canbegood(input))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}