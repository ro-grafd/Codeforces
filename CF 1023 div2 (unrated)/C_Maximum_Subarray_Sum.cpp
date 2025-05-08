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
    string s;
    cin >> s;
    vll a(n);
    rep(i,0,n) cin >> a[i];
    ll mx = 0, res = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            mx = max(mx + a[i], a[i]);
            res = max(res, mx);
        }else
        {
            mx = 0;
        }
    }
    if(res > k)
    {
        cout << "No" << nline;
    }else if(res == k)
    {
        cout << "Yes" << nline;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
                a[i] = -1e18;
        }
        for(auto& num : a)
            cout << num <<' ';
        cout << nline;
    }else
    {
        ll firstZero = -1;
        for(int i = 0; i <n; i++)
        {
            if(s[i] =='0')
            {
                firstZero = i;
                break;
            }
        }
        if(firstZero == -1)
        {
            cout << "No" << nline;
            return;
        }
        cout << "Yes" << nline;
        ll prefix = 0, running_pref = 0;
        for(int i = firstZero - 1; i >=0; i--)
        {
            running_pref += a[i];
            prefix = max(prefix, running_pref);
        }
        ll suffix = 0, running_suff = 0;
        for(int i = firstZero + 1; i < n; i++)
        {
            if(s[i] == '0') break;
            else
            {
                running_suff += a[i];
                suffix = max(suffix, running_suff);
            }
        }
        a[firstZero] = k - prefix - suffix;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0' && i != firstZero)
            {
                a[i] = -1e18;
            }
        }
        for(auto& num : a)
        {
            cout << num << ' '; 
        }
        cout << nline;
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