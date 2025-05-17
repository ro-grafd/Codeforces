/*==================================================
  Author    : ASSaASSin
  Created   : 17-May-2025
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
    int n, q; cin >> n >> q;
    vll a(n+1, 0), k(q), prefixMax(n);
    rep(i, 1, n+1)
    {
        ll x;
        cin >> x;
        a[i] = a[i-1] + x;
        if(i == 1)
            prefixMax[i-1] = x;
        else
            prefixMax[i-1] = max(prefixMax[i-2], x);
    }
         
    // for(int n : prefixMax)
    //     cout << n << ' ';
    for(int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        int ind = upper_bound(prefixMax.begin(), prefixMax.end(), x) - prefixMax.begin();
        cout << a[ind] << ' ';
    }
    cout << endl;
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