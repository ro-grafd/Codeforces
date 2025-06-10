/*==================================================
  Author    : ASSaASSin
  Created   : 17-May-2025
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
bool comp(int a, int b) {
  	return a > b;
}
void solve()
{
    int n; cin >> n;
    vi x(n), y(n);
    rep(i, 0, n) cin >> x[i];
    rep(i, 0, n) cin >> y[i];
    vector<pair<ll,int>> arr(n);
    for(int i = 0; i < n; i++)
    {
        arr[i] = {y[i] - x[i], i};
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    int ans = 0;
    int l = 0, r = n - 1;
    while(l < r)
    {
        int leftind = arr[l].second;
        int rightind = arr[r].second;
        while(l < r && arr[l].first + arr[r].first < 0)
            r--;
        if(l >= r)
            break;
        ans++;
        l++;
        r--;
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