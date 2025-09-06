/*==================================================
  Author    : ASSaASSin
  Created   : 22-June-2025
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

void solve()
{
    int n, m; cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    vector<int> colors(n*m + 1, 0);
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            cin >> grid[i][j];
            // colors[grid[i][j]]++;
        }
    }
    vector<vector<int>> dir = {{1,0}, {-1,0}, {0, 1}, {0, -1}};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            colors[grid[i][j]] = max(colors[grid[i][j]], 1);
            for(int d = 0; d < 4; d++)
            {
                int newi = i + dir[d][0];
                int newj = j + dir[d][1];
                if(newi >= 0 && newj >= 0 && newi < n && newj < m && grid[i][j] == grid[newi][newj])
                {
                    colors[grid[i][j]] = 2;
                }
            }
        }
    }
    // for(int n : colors)
    // {
    //     debug(n);
    // }
    int mx = *max_element(colors.begin(), colors.end());
    int sum = accumulate(colors.begin(), colors.end(),0);
    cout << sum - mx << nline;
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