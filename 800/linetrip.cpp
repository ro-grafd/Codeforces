#include<bits/stdc++.h>
using namespace std;
int mingastank( vector<int>& input, int x)
{
    int gaps =input[0]-0;
    for(int i=1;i<input.size();i++)
    {
        gaps = max(gaps,input[i]-input[i-1]);
    }
    gaps=max(gaps,2* ( x - input[input.size()-1]));
    return gaps;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        cin>>x;
        vector<int>input(n);
        for(int i=0;i<n;i++) cin>>input[i];
        cout<<mingastank(input,x)<<endl;
    }
    return 0;
}