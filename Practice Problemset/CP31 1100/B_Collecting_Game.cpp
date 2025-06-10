#include <bits/stdc++.h>
using namespace std;
#define Assassin
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using ll = long long;
using lld = long double;
using ull = unsigned long long;

const ll MOD = 1e9 + 7;
const ll INF = LONG_LONG_MAX;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;

#define pb push_back
#define mp make_pair
#define nline '\n'
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rev(i, a, b) for(int i = (a); i >= (b); i--)

#ifdef Assassin
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x) ;
#endif

void solve()
{
    ll n;
    cin >> n;
    vector<pll> a(n);
    rep(i, 0, n)
    {
        ll x;
        cin >> x;
        a[i] = {x, i};
    }
    sort(a.begin(), a.end());
    vector<ll> prefix(n);
    prefix[0] = a[0].first;
    for(int i = 1; i < n; i++)
        prefix[i] = a[i].first + prefix[i-1];
    vll dp(n);
    dp[n-1] = n - 1;
    for(int i = n - 2 ; i >= 0; i--)
    {
        if(prefix[i] >= a[i+1].first)
            dp[i] = dp[i + 1];
        else
            dp[i] = i;
    }
    vll ans(n, 0);
    for(int i = 0; i < n; i++)
    {
        ans[a[i].second] = dp[i];
    }
    for(auto& n : ans)
    {
        cout << n << ' ';
    }
    cout << nline;
}
int main ()
{
    fastio();
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}