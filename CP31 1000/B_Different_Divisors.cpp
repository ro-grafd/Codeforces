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
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;

#define pb push_back
#define mp make_pair
#define nline '\n'
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rev(i, a, b) for(int i = (a); i >= (b); i--)

#ifdef Assassin
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x) ;
#endif

ll next_prime(ll n)
{
    for(ll i = n; ; i++)
    {
        bool isPrime = true;
        for(ll j = 2; j * j <= i; j++)
        {
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            return i;
        }
    }
}

int main ()
{
    fastio();
    int tt;
    cin >> tt;
    while(tt--)
    {
        ll d;
        cin >> d;
        ll p = next_prime(d + 1);
        ll q = next_prime(p + d);
        ll ans = min(1LL* p * p * p, 1LL * p * q);
        cout << ans << nline;
    }
    return 0;
}