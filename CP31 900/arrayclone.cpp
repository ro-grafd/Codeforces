#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt; cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int>hash;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            hash[a[i]]++;
        } 
        int maxele = 0;
        for(auto& itr : hash)
        {
            maxele = max(itr.second, maxele);
        }
        int ans = 0;
        while(maxele < n)
        {   
            int swaps = min(n - maxele, maxele);
            ans += 1 + swaps;
            maxele += swaps;
        }
        cout << ans << endl;
    }
    return 0;
}

// 1 test = 1e8 op
// per test case = 10^4
// but the size of array is 10^5