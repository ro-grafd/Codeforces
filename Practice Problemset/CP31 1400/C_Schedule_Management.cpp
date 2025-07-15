/*==================================================
  Author    : ASSaASSin
  Created   : 13-July-2025
  Purpose   : Competitive Programming Template
==================================================*/

#include <bits/stdc++.h>
using namespace std;
#define Assassin
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using ll = long long;
using lld = long double;
using ull = unsigned long long;

const ll mod = 1e9 + 7;
const ll inf = LONG_LONG_MAX;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umpll;
typedef map<int, int> mpii;
typedef map<ll, ll> mpll;

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
#define int long long
bool canDo(int X, vi& cnt, int n)
{
    int left = 0, help = 0;
    for(int i = 0; i < n; i++)
    {
        if(X < cnt[i])
        {
            left += (cnt[i] - X);
        }else
        {
            help += (X - cnt[i]) / 2;
        }
    }
    // 1 2 3 4 5 6.....n
    return left <= help;
}
void solve()
{
    int n, m; cin >> n >> m;
    vi a(m);
    rep(i, 0, m) 
    {
        cin >> a[i];
        a[i]--;
    }
    vi cnt(n);
    for(int worker : a)
    {
        cnt[worker]++;
    }
    int time = -1;
    int low = 0, high = 2 * m;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(canDo(mid, cnt, n))
        {
            time = mid;
            high = mid - 1;
        }else
        {
            low = mid + 1;
        }
    }
    cout << time << nline;
}

signed main()
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