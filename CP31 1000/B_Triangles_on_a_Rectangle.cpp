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
// #define int long long
#ifdef Assassin
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x) ;
#endif

void solve()
{
    ll w, h;
    cin >> w >> h;
    ll kx1, ky1, maxGapX1, maxGapY1;
    ll kx2, ky2, maxGapX2, maxGapY2;

    cin >> kx1;
    ll x1[kx1];
    rep(i, 0, kx1) cin >> x1[i];
    maxGapX1 = x1[kx1 - 1] - x1[0];

    cin >> kx2;
    ll x2[kx2];
    rep(i, 0, kx2) cin >> x2[i];
    maxGapX2 = x2[kx2 - 1] - x2[0];

    cin >> ky1;
    ll y1[ky1];
    rep(i, 0, ky1) cin >> y1[i];
    maxGapY1 = y1[ky1 -1] - y1[0];

    cin >> ky2;
    ll y2[ky2];
    rep(i, 0, ky2) cin >> y2[i];
    maxGapY2 = y2[ky2 -1] - y2[0];
    
    ll ans = max({(int)maxGapY1 * w, (int)maxGapX1 * h, (int)maxGapY2 * w, (int)maxGapX2 * h});
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