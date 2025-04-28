#include <bits/stdc++.h>
using namespace std;
#define Assassin
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> ps;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ps.push_back({x, i});
    }
    sort(ps.begin(), ps.end(), greater<pii>());
    vector<ll> ans(n +1 , 0);
    ll counter = 1;
    ll time = 0;
    ans[0] = 0;
    for(int i = 0 ; i < n; i++)
    {
        int index = ps[i].second;
        ans[index] = counter;
        time += (2 * abs(counter * ps[i].first));
        if(counter < 0)
        {
            counter = abs(counter) + 1;
        }else{
            counter = -counter;
        }
    }
    cout << time << nline;
    for(auto coor : ans)
    {
        cout << coor << ' ';
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