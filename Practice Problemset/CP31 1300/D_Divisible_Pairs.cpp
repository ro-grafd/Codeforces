/*==================================================
  Author    : ASSaASSin
  Created   : 28-May-2025
  Purpose   : Competitive Programming Template
==================================================*/

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
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;

#define pb push_back
#define mp make_pair
#define nline '\n'
#define yes cout << "YES" << nline
#define no cout << "NO" << nline
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rev(i, a, b) for(int i = (a); i >= (b); i--)

int gcd(int x, int y)  { return (y ? gcd(y, x % y) : x); }
int lcm(int x, int y)  { return x * y / gcd(x, y); }

#ifdef Assassin
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x) ;
#endif

void solve()
{
    int n, c, j, r ;
    ll x, y;
    cin >> n >> x >> y;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) 
        cin >> c, a[i] = {c % x, c % y};

    sort(a.begin(), a.end()); 
    long long cnt = 0;
    for(auto b = a.begin(), it = b; it != a.end(); ++it) {			
        j = (x - it->first) %x;
        r = it->second %y;						
        auto p = lower_bound(b, it, mp(j, r));
        cnt += upper_bound(p, it, mp(j, r)) - p;
    }
    cout << cnt << '\n';
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