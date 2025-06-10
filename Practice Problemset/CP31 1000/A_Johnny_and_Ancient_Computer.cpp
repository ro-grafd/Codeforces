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
    ll a, b;
    cin >> a >> b;
    ll ra = a, rb = b;
    while(ra % 2 == 0)
        ra = ra / 2;
    while(rb % 2 == 0)
        rb = rb / 2;
    if(ra != rb)
        cout << -1 << nline;
    else
    {
        a = a / ra;
        b = b / rb;
        a = log2(a);
        b = log2(b);
        ll ans = ceil(1.0L * abs(a-b) / 3);
        cout << ans << nline;
    }
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