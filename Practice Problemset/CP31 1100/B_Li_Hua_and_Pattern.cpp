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
    ll k;
    cin >> n >> k;
    int grid[n][n];
    rep(i,0,n)
        rep(j,0,n)
            cin >> grid[i][j];
    int times = 0;
    rep(i,0,n)
        rep(j,0,n)
            if(grid[i][j] != grid[n-1-i][n-1-j])
                times++;
    times = times / 2;
    if(times > k)
    {
        cout << "NO" << nline;
    }else
    {
        k = k - times;
        if(n % 2) 
        {
            cout << "YES" << nline;
        }
        else if(k % 2)
        {
            cout << "NO" << nline;
        }else
        {
            cout << "YES" << nline;
        }
    }
}
// k = 6
// 1 1 1 1 1
// 1 0 1 1 1        // question is not about matching the original, but creating a grid matches its rotation
// 1 1 0 1 1        // pattern after rotating central element == central element
// 1 1 1 1 1
// 1 1 1 1 1
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


