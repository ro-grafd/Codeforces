/*==================================================
  Author    : ASSaASSin
  Created   : 21-May-2025
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
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    if(a[n-2] > a[n-1])         // for last two coz those cant be changed
    {
        cout << -1 << nline;
        return;
    }
    else
    {
        if(a[n-1] < 0)         // when we'll do the last operation that time az >= 0 !!!
        {
            if(is_sorted(a.begin(), a.end()))
            {
                cout << 0 << nline;
                return;
            }else
            {
                cout << -1 << nline;
                return;
            }
        }else
        {
            cout << n - 2 << nline; // apart from last two we'll do, so basicall first n -2 same and then n-1 and n
            for(int i = 1; i <= n - 2; i++)
            {
                cout << i << ' ' << n - 1 << ' ' << n << nline;
            }
        }
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