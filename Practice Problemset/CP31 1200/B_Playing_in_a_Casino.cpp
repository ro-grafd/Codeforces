/*==================================================
  Author    : ASSaASSin
  Created   : 15-May-2025
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


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> c(m, vector<int>(n, 0));
    rep(i,0,n)
        rep(j,0,m)
            cin >> c[j][i];
    ll ans = 0;
    for(int i = 0; i < m; i++)
    {
        ll sum = 0;
        sort(c[i].begin(), c[i].end());
        int k = n - 1;
        for(int j = 0; j < n; j++)
        {
            ans = ans - 1ll*k * c[i][j] + 1ll* (n-1-k) * c[i][j];
            k--;  
        }
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