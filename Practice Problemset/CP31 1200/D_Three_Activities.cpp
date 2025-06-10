/*==================================================
  Author    : ASSaASSin
  Created   : 13-May-2025
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

vector<int> getTop3(vector<int>& arr, int n)
{
    vector<int> ans(3, -1);
    for(int i = 0; i< n; i++)
    {
        if(ans[0] == -1 || arr[i] > arr[ans[0]])
        {
            ans[2] = ans[1];
            ans[1] = ans[0];
            ans[0] = i;
        }else if(ans[1] == -1 || arr[i] > arr[ans[1]])
        {
            ans[2] = ans[1];
            ans[1] = i;
        }else if(ans[2] == -1 || arr[i] > arr[ans[2]])
        {
            ans[2] = i;
        }
    }
    return ans;
}
void solve()
{
    int n, ans = 0;
    cin >> n;
    vi a(n), b(n), c(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    rep(i, 0, n) cin >> c[i];
    vector<int> A = getTop3(a, n);
    vector<int> B = getTop3(b, n);
    vector<int> C = getTop3(c, n);
    for(int x : A)
        for(int y : B)
            for(int z : C)
            {
                if(x != y && y != z && z != x)
                    ans = max(ans, a[x] + b[y] + c[z]);
            }
    cout << ans << nline;
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