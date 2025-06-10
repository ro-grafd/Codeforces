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
    ll x, y, k;
    cin >> x >> y >> k;
    ll total_stix = y * k + k - 1;
    ll trade_1 = ceil(1.0L*total_stix / (x - 1));
    cout << trade_1 + k << nline;
}

// 1 torch = 1 stick + 1 coal
// k torch = k stick + k*y sticks - 1 (already had one stick)
// 1 stick  -> x sticks -> x -1 sticks (net  gain)
// y sticks -> 1 coal 
// (x-1) sticks per 1 trade
//   k   sticks in how many trade?


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