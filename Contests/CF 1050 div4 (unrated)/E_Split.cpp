#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    map<int, int> freq;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    bool ok = true;
    for(auto& [key, v] : freq)
    {
        if(v % k)
        {
            ok = false;
        }
    }
    if(!ok)
    {
        cout << 0 << endl;
        return;
    }
    map<int, int> mp;
    int ans = 0;
    for(int l = 0, r = 0; l <= r,  r < n; r++)
    {
        mp[a[r]]++;
        // violate condition
        while(mp[a[r]] > freq[a[r]] / k)
        {
            mp[a[l]]--;
            l++;
        }
        ans += (r - l + 1);
    }
    cout << ans << endl;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}
