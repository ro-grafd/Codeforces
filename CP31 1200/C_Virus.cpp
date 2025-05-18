/*==================================================
  Author    : ASSaASSin
  Created   : 18-May-2025
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

#ifdef Assassin
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x) ;
#endif


bool comp(int a, int b)
{
    return a > b;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(m);
    rep(i, 0, m) cin >> a[i];
    sort(a.begin(), a.end());

    vi t;
    for(int i = 1; i < m; i++)
        t.push_back(a[i] - a[i-1] - 1);
    int last = n - a[m-1] - 1 + a[0];
    if(last > 0) t.push_back(last);
    sort(t.begin(), t.end(), comp);
    
    ll ans = 0, days = 0;
    for(int i = 0; i < t.size(); i++)
    {
        if(t[i] - days * 2 > 0)
        {
            int uninfected = max(1ll, t[i] - 2 * days - 1); // max(1ll,...) because bichme ek hua toh vo bach gaya
            ans = ans + uninfected;
        }
        days += 2;
    }
    cout << n - ans << nline;
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