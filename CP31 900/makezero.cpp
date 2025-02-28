#include<bits/stdc++.h>
using namespace std;

void solve ( vector<int>& a, int n)
{
    vector<int>pref(n,0);
    pref[0] = a[0];
    for(int i =1 ; i < n;i++)
    {
        pref[i] = pref[i-1] ^ a[i];
    }
    for(int i = 0 ; i < n; i++)
    {
        for(int j = i+1 ; j < n; j++)
        {
            int length = j - i + 1;
            
        }
    }
}

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve(a,n);
    }
    return 0;
}