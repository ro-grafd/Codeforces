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
    vll a(n);
    rep(i,0,n) cin >> a[i];
    vll prefix(n, 0);
    prefix[0] = a[0];
    for(int i = 1; i < n; i++)
        prefix[i] = a[i] + prefix[i-1];
    ll ans = -1;
    for(int k = 1; k <=n; k++)
    {
        if(n % k) continue;
        int start = k - 1;
        ll maxi = prefix[start];
        ll mini = prefix[start];
        for(int index = start + k; index < n; index += k)
        {
            ll curr = prefix[index] - prefix[index - k];
            maxi = max(maxi, curr);
            mini = min(mini, curr);
        }
        ans = max(ans, maxi - mini);
    }
    cout << ans << nline;
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