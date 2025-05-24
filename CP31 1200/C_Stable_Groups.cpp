/*==================================================
Author    : ASSaASSin
Created   : 22-May-2025
Purpose   : Competitive Programming Template
==================================================*/

#include <bits/stdc++.h>
using namespace std;
#define Assassin
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


using ll = long long;
using lld = long double;
using ull = unsigned long long;
// #define ll unsigned long long
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
const int maxN = 4e5 + 5;

#ifdef Assassin
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x) ;
#endif


int main ()
{
    fastio();
    ll n, k, x;
    cin >> n >> k >> x;

    vll a(n);
    rep(i,0,n) cin >> a[i];
    sort(a.begin(), a.end());

    vll diff(n - 1, 0);
    for(int i = 1; i < n ; i++)
    {
        ll d = a[i] - a[i-1];
        if(d == 0) continue;
        ll temp = ceil(1.0 * d/x);
        diff[i-1] = temp - 1;    
    }

    sort(diff.begin(), diff.end());

    ll ans = n;
    for(auto& x : diff)
    {
        if(x <= k)
        {
            ans--;
            k -= x;
        }
    }
    cout << ans << nline;
    return 0;
}