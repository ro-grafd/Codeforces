/*==================================================
  Author    : ASSaASSin
  Created   : 18-June-2025
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
vector<int> findPrimeFactors(int n)
{
    // To store the prime factor
    vector<int> primeFactors(9, 0);

    int j = 0;

    // 2s that divide n
    if (n % 2 == 0) {
        primeFactors[j++] = 2;
        while (n % 2 == 0)
            n >>= 1;
    }

    // N must be odd at this point
    // Skip one element
    for (int i = 3;
         i * i <= n; i += 2) {

        if (n % i == 0) {

            // Update the prime factor
            primeFactors[j++] = i;
            while (n % i == 0)
                n /= i;
        }
    }

    // If n is a prime number
    // greater than 2
    if (n > 2)
        primeFactors[j++] = n;
    
    vector<int> PrimeFactors(j);
    
    for(int i = 0; i < j; i++)
    {
        PrimeFactors[i] = primeFactors[i];
    }
    
    return PrimeFactors;
}

// Function that finds the shortest
// subsequence
void findShortestSubsequence(vector<int> &dp, vector<ll> a,
                        int index, vector<int> primeFactors)
{
    int n = a.size();

    for (int j = index; j < n; j++) {
        int bitmask = 0;

        for (int p = 0;
             p < primeFactors.size(); p++) {

            // Check if the prime factor
            // of first number, is also
            // the prime factor of the
            // rest numbers in array
            if ((a[j] % primeFactors[p]) == 0) {

                // Set corresponding bit
                // of prime factor to 1,
                // it means both these
                // numbers have the
                // same prime factor
                bitmask ^= (1 << p);
            }
        }

        for (int i = 0; i < dp.size(); i++) {

            // If no states encountered
            // so far continue for this
            // combination of bits
            if (dp[i] == n + 1)
                continue;

            // Update this state with
            // minimum ways to reach
            // this state
            dp[bitmask & i]
                = min(dp[bitmask & i],
                           dp[i] + 1);
        }
    }
}

// Function that print the minimum
// length of subsequence
ll printMinimumLength(vector<ll> a)
{
    int Min = a.size() + 1;

    for (int i = 0; i < a.size() - 1; i++) {

        // Find the prime factors of
        // the first number
        vector<int> primeFactors
            = findPrimeFactors(a[i]);

        int n = primeFactors.size();
    
        // Initialize the array with
        // maximum steps, size of the
        // array + 1 for instance
        vector<int> dp(1 << n, a.size() + 1);

        // Express the prime factors
        // in bit representation

        // Total number of set bits is
        // equal to the total number
        // of prime factors
        int setBits = (1 << n) - 1;

        // Indicates there is one
        // way to reach the number
        // under consideration
        dp[setBits] = 1;
        findShortestSubsequence(dp, a, i + 1,
                                primeFactors);

        // State 0 corresponds
        // to gcd of 1
        Min = min(dp[0], Min);
    }

    // If not found such subsequence
    // then print "-1"
    if (Min == (a.size() + 1))
        return -1;

    // Else print the length
    else
        return Min;
}
void solve()
{
    int n;
    cin >> n;
    vll a(n);
    rep(i, 0, n) cin >> a[i];
    ll g = 0;
    for(int i = 0; i < n; i++)
    {
        g = gcd(g, a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        a[i] = a[i] / g;
    }
    ll an = printMinimumLength(a);
    // debug(g);
    if(count(a.begin(), a.end(), 1) == n)
    {
        cout << 0 << nline;
        return;
    }
    ll cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 1)
            cnt++;
    }
    if(an != 1)
    {
        cout << an - 1 + cnt - 1 << nline;
    }else
    {
        cout << cnt << nline;
    }

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