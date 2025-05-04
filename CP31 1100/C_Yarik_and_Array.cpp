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

// void solve()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     rep(i, 0, n) cin >> a[i];
//     int r = 0, l = 0;
//     ll window = 0, ans = INT_MIN;
//     while(r < n)
//     {
//         if(window < 0)
//         {
//             window = 0;
//             l = r;
//         }
//         if(l < r)
//         {
//             if((a[r] ^ a[r -1]) & 1)
//             {
//                 window += a[r];

//             }else
//             {
//                 window = a[r];
//                 l = r;
//             }
//         }else
//         {
//             window = a[r];
//         }
//         ans = max(ans, window);
//         r++;
//     }
//     cout << ans << nline;
// }

void solve()
{
    int n;
    cin >> n;
    int a[n];
    rep(i, 0, n) cin >> a[i];
    ll ans = a[0];
    ll minPrefix = min(a[0], 0);
    ll sum = a[0];
    for(int i = 1; i < n; i++)
    {
        if(!((a[i] ^ a[i-1]) & 1))
        {
            minPrefix = 0;
            sum = 0;
        }
        sum += a[i];
        ans = max(ans, sum - minPrefix);
        minPrefix = min(minPrefix, sum);
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