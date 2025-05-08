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
    int n;
    ll x;
    cin >> n >> x;
    vll a(n);
    rep(i,0,n) cin >> a[i];
    ll low = 1, high = INT_MAX, ans = 1000000;
    while(low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll water = 0;
        for(int i = 0 ; i < n; i++)
        {
            water += max(mid - a[i], 0LL);
        }
        if(water <= x)
        {
            // ans = min(ans, mid);
            low = mid + 1;
        }else
        {
            high = mid - 1;
        }
    }
    cout << high << nline;
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