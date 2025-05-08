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
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vll x(n + 1), y(n + 1);
    rep(i,1,n+1) cin >> x[i] >> y[i];
    ll ans = llabs(x[a] - x[b]) + llabs(y[a] - y[b]), min1 = 1e17, min2 = 1e17;
    for(int i = 1; i <=k; i++)
    {
        min1 = min(min1, llabs(x[a] - x[i]) + llabs(y[a] - y[i]));
        min2 = min(min2, llabs(x[b] - x[i]) + llabs(y[b] - y[i]));
    }
    ans = min(ans, min1 + min2);
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