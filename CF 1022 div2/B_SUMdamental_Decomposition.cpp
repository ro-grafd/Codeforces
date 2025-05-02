#include <bits/stdc++.h>
using namespace std;
#define Assassin
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/* Signature ASSaASSin 
.........basic template for CF.....*/
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

ll foo(ll n)
{
    if(n == 0) return 2;
    int m = __builtin_popcount(n);
    if(m >= 2) return n;

    for(int left = 0; left <31; left++)
    {
        if(!(n >> left) & 1)
        {
            ll p = 1LL << left;
            return n + 2 * p;
        }
    }
    return n + 2;
}


void solve()
{
    int n;
    ll  x;
    cin >> n >> x;
    if(n == 1)
    {
        if(x > 0)
        {
            cout << x << nline;
        }else{
            cout<< -1 << nline;
        }
        return;
    }
    ll result = INF;
    int right = min(n, 30);
    for(int left = 1 ; left <= right; left++)
    {
        int temp = (n - left) & 1;
        ll p = x ^ temp;
        ll q = INF;
        if(left == 1)
        {
            if(p > 0)
            {
                q = p;
            }
        }
        else if(left == 2)
        {
            q = foo(p);
        }else
        {
            if(p == 0 && left == 3)
            {
                q = 6;
            }else if(__builtin_popcount(p) >= left)
            {
                q = p;
            }
        }
        if(q < INF)
        {
            result = min(result, (n-left) + q);
        }
    }
    if(result == INF)
    {
        cout << -1 << nline;
    }else
    {
        cout << result << nline;
    }
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