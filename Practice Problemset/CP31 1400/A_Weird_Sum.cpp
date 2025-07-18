/*==================================================
  Author    : ASSaASSin
  Created   : 15-July-2025
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


#define int long long
signed main()
{
    fastio();
    // const ll MAX_N = 10000000;
    // sieve(MAX_N);
    int n, m; cin >> n >> m;
    int board[n+1][m+1];
    map<int, vector<pair<int, int>>> prev;
    // vector<int> X(100005), Y(100005);
    ll ans = 0;
    // vector<bool> seen(100005, false);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> board[i][j];
            // X[board[i][j]] = i; 
            prev[board[i][j]].push_back({i, j});
            // if(!prev.count(board[i][j]))
            // {
                
            // }else
            // {
            //     for(auto& p : prev[board[i][j]])
            //     {
            //         ans += abs(p.first - i) + abs(p.second - j);
            //     }
            //     prev[board[i][j]].push_back({i, j});
            //     // ans += (abs(i - prevIndex[board[i][j]].first) + abs(j - prevIndex[board[i][j]].second)); 
            // }
        }
    }
    ll Xdiff = 0, Ydiff = 0;
    for(auto [color, v] : prev)
    {
        int n = v.size();
    
        // Extract and sort x-coordinates
        vector<int> x_coords, y_coords;
        for(auto& p : v) {
            x_coords.push_back(p.first);
            y_coords.push_back(p.second);
        }
        
        sort(x_coords.begin(), x_coords.end());
        sort(y_coords.begin(), y_coords.end());
        
        // Now apply the formula
        for(int i = 0; i < n; i++) {
            Xdiff += (i * x_coords[i] - (n-1-i) * x_coords[i]);
            Ydiff += (i * y_coords[i] - (n-1-i) * y_coords[i]);
    }
    }

    cout << Xdiff + Ydiff << nline;
    return 0;
}