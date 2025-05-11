/*==================================================
  Author    : ASSaASSin
  Created   : 11-May-2025
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
    int n; cin >> n;
    vll a(n);
    rep(i,0,n) cin >> a[i];
    ll evengcd = a[0];
    ll oddgcd = a[1];
    for(int i = 0; i < n; i++)
    {
        if(i & 1)
        {
            oddgcd = __gcd(oddgcd, a[i]);
        }else
        {
            evengcd = __gcd(evengcd, a[i]);
        }
    }
    bool forEven = true, forOdd = true;
    for(int i = 0; i < n; i++)
    {
        if(i & 1)
        {
            if(a[i] % evengcd == 0) forEven = false;
        }else
        {
            if(a[i] % oddgcd == 0) forOdd = false;
        }
    }
    if(forEven) cout << evengcd << nline;
    else if(forOdd) cout << oddgcd << nline;
    else cout << 0 << nline;
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