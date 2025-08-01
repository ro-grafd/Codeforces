/*==================================================
  Author    : ASSaASSin
  Created   : 15-June-2025
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
pii overlap(pii& pos, pii& obs)
{
    return {max(pos.first, obs.first), min(pos.second, obs.second) };
}
void solve()
{
    int n;
    cin >> n;
    vi d(n);
    rep(i, 0, n) cin >> d[i];
    vpii intervals(n), valids(n);
    rep(i, 0, n) cin >> intervals[i].first >> intervals[i].second;
    pii pos ={0, 0};
    for(int i = 0; i < n; i++)
    {
        if(d[i] == -1)
            pos.second++;
        else if(d[i] == 1)
        {
            pos.first++;
            pos.second++;
        }
        pos = overlap(pos, intervals[i]);
        if(pos.first > pos.second)
        {
            cout << -1 << nline;
            return;
        }
        valids[i] = pos;
    }
    vi ans(n);
    int poss = pos.second;
    int index = n - 1;
    for(int i = n - 1; i > 0; i--)
    {
        if(d[i] != -1)
        {
            ans[index] = d[i];
            index--;
            if(d[i] == 1)
                poss--;
            continue;
        }
        if(poss <= valids[i-1].second)
        {
            ans[index] = 0;
            index--;
        }else
        {
            ans[index] = 1;
            index--;
            poss--;
        }
    }
    if(d[0] != -1)
    {
        ans[index] = d[0];
        index--;
    }else
    {
        if(poss <= 0)
        {
            ans[index] = 0;
            index--;
        }else
        {
            ans[index] = 1;
            index--;
            poss--;
        }
    }
    for(auto& x : ans)
    {
        cout << x << ' ';
    }
    cout << nline;
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