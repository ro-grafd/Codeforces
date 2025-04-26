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
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    vll u;
    vi c;
    for (int i = 0; i < n;)
    {
        ll d = a[i];
        int cnt = 0;
        while (i < n && a[i] == d)
        {
            cnt++;
            i++;
        }
        u.pb(d);
        c.pb(cnt);
    }
    int m = u.size();
    bool ok = false;
    rep(i, 0, m)
    {
        if (c[i] >= 4)
        {
            ok = true;
            break;
        }
    }
    
    if (!ok) {
        rep(i, 0, m-1)
        {
            if (u[i+1] == u[i] + 1 && c[i] >= 2 && c[i+1] >= 2)
            {
                ok = true;
                break;
            }
        }
    }
    
    if (!ok) {
        rep(i, 0, m-2)
        {
            if (u[i+1] == u[i] + 1 && u[i+2] == u[i] + 2 && c[i] >= 2 && c[i+1] >= 1 && c[i+2] >= 2)
            {
                ok = true;
                break;
            }
        }
    }
    
    cout << (ok ? "Yes" : "No") << nline;
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