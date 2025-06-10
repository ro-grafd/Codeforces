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
    ll n, k;
    cin >> n >> k;
    vll a(n);
    rep(i, 0, n) cin >> a[i];
    ll maxElement = *max_element(a.begin(), a.end());
    ll minElement = *min_element(a.begin(), a.end());
    if(maxElement - minElement > k + 1)
    {
        cout << "Jerry" << nline;
        return;
    }
    int freq = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(a[i] == maxElement) freq++;
    }
    if(maxElement - minElement == k + 1 && freq > 1)
    {
        cout << "Jerry" << nline;
        return;
    }
    ll total = accumulate(a.begin(), a.end(), 0ll);
    if(total % 2 == 0)
    {
        cout << "Jerry" << nline;
    }else
    {
        cout << "Tom" << nline;
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