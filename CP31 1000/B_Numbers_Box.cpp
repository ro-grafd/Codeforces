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
    int n, m;
    cin >> n >> m;
    ll grid[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
    long long negatives = 0;
    long long minimum = INT_MAX;
    long long sum = 0;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            if(grid[i][j] < 0) negatives++;
            minimum = min(minimum, abs(grid[i][j]));
            sum += abs(grid[i][j]);
        }
    }
    if(negatives % 2 == 0){
        cout << sum << nline;
        return ;
    }else
    {
        cout << sum - 2 * minimum << nline;
        return;
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