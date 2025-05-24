/*==================================================
  Author    : ASSaASSin
  Created   : 23-May-2025
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

int gcd(int x, int y)  { return (y ? gcd(y, x % y) : x); }
int lcm(int x, int y)  { return x * y / gcd(x, y); }

#ifdef Assassin
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x) ;
#endif

void solve()
{
    int n; cin >> n;
    string s;
    cin >> s;
    set<string> st;
    for(int i = 0; i < n; i++)
    {
        string temp;
        for(int k = 0; k < 3 && i + k < n; k++)
        {
            temp.pb(s[i+k]);
            st.insert(temp);
        }
    }
    for(int len = 1; len <= 3; len++)
    {
        string t(len, 'a');
        while(true)
        {
            if(st.count(t) == 0)
            {
                cout << t << nline;
                return;
            }
            int idx = len - 1;
            while(idx >= 0 && t[idx] == 'z')
            {
                t[idx] = 'a';
                idx--;
            }
            if(idx < 0) break;
            t[idx]++; // turnign az to ba
        }
    }
    // cout << ans << nline;
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