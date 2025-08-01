/*==================================================
  Author    : ASSaASSin
  Created   : 02-june-2025
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
set<ll> precompute;
void solve()
{
    int n;
    cin >> n;
    if(precompute.count(n))
    {
        yes;
    }
    else
        no;
}
int main ()
{
    fastio();
    int tt;
    cin >> tt;
    for(ll k = 2; k <= 1000; k++)
    {// this is the [min, max] range of k
        ll val = 1 + k;
        ll p = k * k;
        for(ll count = 2; count <= 20; count++)
        {
            val += p;
            if(val > 1e6) break;
            precompute.insert(val);
            p = p * k;
        }
    }
    while(tt--)
    {
        solve();
    }
    return 0;
}