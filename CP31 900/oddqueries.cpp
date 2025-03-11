#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, q;
        cin >> n >> q;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int sum = accumulate(a.begin(),a.end(),0);
        int l, r, k;
        while(q--)
        {
            cin >> l >> r >> k;

        }  
    }
    return 0;
}