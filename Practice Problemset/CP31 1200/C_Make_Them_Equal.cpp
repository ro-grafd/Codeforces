/*==================================================
  Author    : ASSaASSin
  Created   : 21-May-2025
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

void solve()
{
    int n; cin >> n;
    char c; cin >> c;
    char s[n];
    bool allSame = true;
    rep(i,0,n)
    {
        cin >> s[i];
    }
    int lastIndex = -1;
    rep(i,0,n)
    {
        if(s[i] == c) lastIndex = i;
        if(s[i] != c) allSame = false;
    }
    if(allSame)
    {
        cout << 0 << nline;
    }else if(lastIndex == -1)
    {
        cout << 2 << nline;
        cout << n-1 << ' ' << n << nline;
    }else if(lastIndex == n - 1)
    {
        cout << 1 <<nline;
        cout << n << nline;
    }else if(lastIndex >= n / 2)
    {
        cout << 1 << nline;
        cout << lastIndex + 1 << nline;
    }else
    {
        cout << 2 << nline;
        cout << n - 1 << ' ' << n << nline;
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