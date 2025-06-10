/*==================================================
  Author    : ASSaASSin
  Created   : 29-May-2025
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
    int n,q;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    cin >> q;
    // vll prefix(n);
    vi mismatch(n, -1);
    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[i-1])
        {
            mismatch[i] = i - 1;
        }else
        {
            mismatch[i] = mismatch[i-1];
        }
    }
    // prefix[0] = a[0];
    // for(int i = 1; i < n; i++)
    // {
    //     prefix[i] = prefix[i-1] + a[i];
    // }
    // vpii queries(q);
    rep(k, 0, q)
    {
        int l, r;
        cin >> l >> r;
        int i, j;
        l -= 1, r -= 1;
        if(l <= mismatch[r])
        {
            cout << mismatch[r] + 1 << ' ' << r + 1 << nline;
        }else
        {
            cout << -1 << ' ' << -1 << nline;
        }
    }
    cout << nline;
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