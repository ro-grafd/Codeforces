/*==================================================
  Author    : ASSaASSin
  Created   : 06-May-2025
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
    int n; cin >> n;
    vector<vector<int>> c(n);
    vpii b;
    for(auto& v : c)
    {
        int m;
        cin >> m;
        v.resize(m);
        int bi = 0;
        for(int i = 0; i < m; i++)
        {
            cin >> v[i];
            bi = max(bi, v[i] - i);
        }
        b.pb({bi, m});    
    }
    sort(b.begin(), b.end());
    int p = 0;
    vector<int> k;
    k.pb(0);
    int sum = 0;
    for(int i = 0; i < b.size(); i++)
    {
        sum += b[i].second;
        k.pb(sum);
    }
    for(int i = 0; i < b.size(); i++)
    {
        p = max(p, b[i].first - k[i]);
    }
    cout << p + 1 << nline;
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