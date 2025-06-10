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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    multiset<int> s;
    for(int i = 0; i < n; i++)
    {
        if(abs( (n - 1 - i) - i) <= k + 1) // why + 1? because 1,2,  5  9,10,13,15,17 
        {                                  // a= 2 b = 5 if we remove last two then also 5 can be chosen
            s.insert(a[i]);                // thats why k + 1
        }                                  // But the question being how after removing, f(x) is mid for medians
    }                                      // because thats what the property of median is !!!
    cout << *s.rbegin() - *s.begin() + 1 << nline; // coz all the houses in between can be bought
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