#include <bits/stdc++.h>
using namespace std;
#define Assassin
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long
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
    ll n, c;
    cin >> n >> c;
    vector<ll> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i];
    ll low = 1, high = MOD;
    while(low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll area = 0;
        for(ll side : s)
        {
            area += (side + 2 * mid) * (side + 2 * mid);
            if(area > c) break;
        }
        if(area == c)
        {
            cout << mid << nline;
            return;
        }
        if(area > c)
        {
            high = mid - 1;
        }else
        {
            low = mid + 1;
        }
    }
    
}
int32_t main ()
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