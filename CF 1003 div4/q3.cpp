#include<bits/stdc++.h>
using namespace std;
bool isNonDecr(vector<int>& a, vector<int>& b, int n, int m)
{
    for(int i=0;i+1<n;i++)
    {
        if(a[i] > a[i+1])
        {
            a[i] = b[0] - a[i];
        }
    }
    bool isorted = true;
    for(int i=0;i+1<n;i++)
    {
        if(a[i] >a[i+1])
        {
            isorted = false;
        }
    }
    return isorted;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        cin>>m;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        cin>>b[0];
        cout << (isNonDecr(a, b,n,m) ? "YES" : "NO") << '\n';
    }
    return 0;
}