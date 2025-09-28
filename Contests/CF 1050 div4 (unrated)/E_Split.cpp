#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), cnt(n + 1), ct(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (int i = 0; i <= n; i++) {
        if (cnt[i] % k) {
            return void(cout << 0 << endl);
        } else {
            cnt[i] /= k;
        }
    }
    int res = 0;
    for (int l = 0, r = 0; r >= l and r < n; r++) {
        ct[a[r]]++;
        while (ct[a[r]] > cnt[a[r]]) {
            ct[a[l]]--;
            l++;
        }
        res += (r - l + 1);
    }
    cout << res << endl;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}
