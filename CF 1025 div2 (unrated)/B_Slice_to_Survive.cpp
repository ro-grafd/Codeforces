/*==================================================
  Author    : ASSaASSin
  Created   : 23-May-2025
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
int moves(int n)
{
    int count = 0;
    while(n > 1)
    {
        n = (n+1) / 2;
        count++;
    }
    return count;
}
void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int move = 0;
    if(n - a + 1 < a)
        a = n - a + 1;
    if(m - b + 1 < b)
        b = m - b + 1;
    // kopre mai daal do top-left coz right wala cut hi valid hoga naaki left wala
    cout << min(1 + moves(a) + moves(m), 1 + moves(n) + moves(b)) << nline;
    // cout << move << nline;
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

