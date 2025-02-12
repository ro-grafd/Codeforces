#include<bits/stdc++.h>
using namespace std;
int minimalactions(vector<char>& nums)
{
    int n = nums.size();
    int gaps = 0;
    int biggest=0;
    vector<int>temp;
    for(int i=0; i < n; i++)
    {
        if(nums[i]=='.')
        {
            gaps++;
        }else
        {
            temp.push_back(gaps);
            gaps=0;
        }
        // biggest = max(biggest,gaps);
    }
    temp.push_back(gaps);
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i]>2)
        {
            return 2;
        }
    }
    return accumulate(temp.begin(),temp.end(),0);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<char>input(n);
        for(int i = 0;i<n;i++) cin>>input[i];
        cout<<minimalactions(input)<<endl;
    }
    return 0;
}