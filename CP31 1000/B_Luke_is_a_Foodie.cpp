#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rev(i, a, b) for(int i = (a); i >= (b); i--)

void solve()
{
    int n,ans = 0;
    ll x;
    cin >> n >> x;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll lmax = a[0];
    ll rmin = a[0];
    for(int i = 0; i < n; i++)
    {
        lmax = max(lmax, a[i]);
        rmin = min(rmin, a[i]);
        // l > r
        if( lmax - x > x + rmin)
        {
            ans++;
            lmax = rmin = a[i];
        }
    }
    cout << ans << nline;
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