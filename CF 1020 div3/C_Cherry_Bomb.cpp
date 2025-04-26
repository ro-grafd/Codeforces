#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007
#define INF 1000000000000000000LL
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rev(i, a, b) for(int i = (a); i >= (b); i--)

void solve()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    int count = 0;
    rep(i, 0, n)
    {
        cin >> b[i];
        if(b[i] == -1) count++;
    }
    
    if(count == n)
    {
        int l = -1, r = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            l = max(l, (0 + a[i]));
            r = min(r, (k + a[i]));
        }
        cout << r - l + 1 << nline;
    }
    else
    {
        ll sum = -1;
        for(int i = 0; i < n; i++)
        {
            if(b[i] == -1) continue;
            if(sum == -1)
            {
                sum = a[i] + b[i];
                break;
            }
        }
        int ans = 1;
        for(int i = 0; i < n; i++)
        {
            if(b[i] == -1)
            {    
                if(sum - a[i] > k || sum - a[i] < 0)
                {
                    ans = 0;
                    break;
                }
                continue;
            }
            if(a[i] + b[i] != sum)
            {
                ans = 0;
                break;
            }
        }
        cout << ans << nline;
    }
}
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}