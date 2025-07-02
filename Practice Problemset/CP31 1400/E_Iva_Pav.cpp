/*==================================================
  Author    : ASSaASSin
  Created   : 02-July-2025
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

ll gcd(ll x, ll y)
{
    if(y == 0)
        return x;
    return gcd(y, x % y);
}
ll lcm(int x, int y) { return x * y / gcd(x, y); }
bool isPrime(ll n)
{
    if(n <= 1)
        return false;
    if(n <= 3)
        return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    for(int i = 5; i * i <= n; i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
bool isPerfectSquare(ll x)
{
    if(x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
vll primes;
void sieve(ll MAX_N)
{
    vector<bool> prime(MAX_N + 1, true);
    prime[0] = prime[1] = false;
    for(ll p = 2; p * p <= MAX_N; p++)
    {
        if(prime[p])
        {
            for(ll i = p * p; i <= MAX_N; i += p)
                prime[i] = false;
        }
    }
    for(ll i = 2; i <= MAX_N; i++)
    {
        if(prime[i])
            primes.pb(i);
    }
}

bool check_and( vector<vector<ll>>& s, ll l, ll r, ll k) {
    ll res = 0;
    for(int j = 0; j <= 31; j++)
    {
        if(s[r+1][j] - s[l][j] == r - l + 1)
        {
            res |= 1 << j;
        }
    }
    return res >= k;
}

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    vector<vector<ll>> s(n + 1, vector<ll>(32, 0));
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i-1];
        for(int j = 0; j <= 31; j++)
        {
            s[i][j] = s[i-1][j] + (a[i-1] >> j&1);
        }
    }

    ll q;
    cin >> q;
    
    while(q--) {
        ll l, k;
        cin >> l >> k;
        l--;
        // Convert to 0-based indexing if needed
        // l--; // Uncomment if input is 1-based
        
        ll left = l;
        ll right = n - 1;
        ll ans = -1;
        // Binary search for rightmost valid position
        while(left <= right) {
            ll mid = left + (right - left) / 2;
            
            if(check_and(s, l, mid, k)) {
                ans = mid;
                left = mid + 1;  // Try to extend further right
            } else {
                right = mid - 1; // Current range is too long
            }
        }
        if(ans == -1) {           
            cout << -1 << ' ';
        } else {
            cout << ans + 1 << ' '; 
        }
    }
    cout << '\n';
}

int main()
{
    fastio();
    const ll MAX_N = 10000000;
    sieve(MAX_N);
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}