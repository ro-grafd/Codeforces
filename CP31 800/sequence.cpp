#include<iostream>
#include<vector>
using namespace std;
void solve ( vector<int>& b)
{
    vector<int>a;
    a.push_back(b[0]);
    int i=1;
    while(i<b.size())
    {
        if(b[i] >= b[i-1])
        {
            a.push_back(b[i]);
            i++;
        }else{
            a.push_back(b[i]);
            a.push_back(b[i]);
            i=i+1;
        }
    }
    // cout << "ans starts"<<endl;
    cout<<a.size()<<endl;
    for(int num : a )
    {
        cout<<num <<" ";
    }
    // return a;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        solve(b);
        cout<<endl;
        // cout<<a.size()<<endl;
        // for(int i =0 ; i< a.size();i++)
        // {
        //     cout<<a[i];
        // }
    }
    return 0;
}