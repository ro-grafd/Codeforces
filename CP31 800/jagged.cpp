#include<bits/stdc++.h>
using namespace std;
bool canbesorted(vector<int>& nums)
{
    if(nums[0]!=1) return false;
    
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>input(n);
        for(int i=0;i<n;i++) cin>>input[i];
        if(canbesorted(input))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}