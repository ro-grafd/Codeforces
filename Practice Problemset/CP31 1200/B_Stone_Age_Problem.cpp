/*==================================================
  Author    : ASSaASSin
  Created   : 19-May-2025
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
const int N=2e5+13;
 
int b[N];
int main ()
{
    fastio();
    int n, q;
    cin >> n >> q;
    vi a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    ll total = accumulate(a.begin(), a.end(), 0ll);

    for(int i = 1, flag = 0, now = 0; i <= q; i++)
    {
        int query;
        cin >> query;
        if(query == 1)
        {
            int index, val;
            cin >> index >> val;
            if(b[index] < flag)
            {
                total -= now;
            }else
            {
                total -= a[index];
            }
            a[index] = val;
            total += val;
            b[index] = i; // means last changed
            cout << total << nline;
        }else if(query == 2)
        {
            int val;
            cin >> val;
            total = 1LL * n * val;
            flag = i;
            now = val;
            cout << total << nline;
        }
    }
    return 0;
}