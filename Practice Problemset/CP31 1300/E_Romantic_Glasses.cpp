/*==================================================
  Author    : ASSaASSin
  Created   : 30-May-2025
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
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
        if(i & 1)
            a[i] *= -1;
    }
    ll sum = 0;
    set<ll>st;
    st.insert(0);
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        if(st.find(sum) != st.end())
        {
            cout << "YES" << nline;
            return;
        }
        st.insert(sum);
    }
    no;
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