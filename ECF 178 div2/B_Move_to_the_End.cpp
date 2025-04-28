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
    int n;
    cin >> n;
    vll a(n);
    rep(i, 0, n) cin >>a[i];
    vll pref(n);
    pref[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        pref[i] = max(pref[i-1], a[i]);
    }
    vll suffSum(n + 1,0);
    // suffSum[n-1] = a[n-1];
    for(int i = n - 1; i >= 0; i--)
    {
        suffSum[i] = suffSum[i+1] + a[i];
    }
    vll ans(n, 0);
    for(int k = 1; k <= n; k++)
    {
        ll defaultSum = suffSum[n - k];
        if(n - k >= 1) ans[k-1] = max(defaultSum, suffSum[n-k+1] + pref[n - k -1] );
        else ans[k-1] = defaultSum;
    }
    for(auto& num : ans)
    {
        cout << num << ' ';
    }
    cout << nline;
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